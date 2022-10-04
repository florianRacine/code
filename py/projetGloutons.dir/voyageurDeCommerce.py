import csv
import matplotlib.pyplot as plt

europe = True

pays = {}
with open("gps-pays-autres.csv", newline="") as fichier_csv:
    for row in csv.reader(fichier_csv, quotechar='"', quoting=csv.QUOTE_NONNUMERIC):
        if (europe == True):
            if (row[2] > -10 and row[2] < 40 and row[1] >= 35 and row[1] < 70):
                pays[row[3]] = (row[2], row[1])
        else:
            pays[row[3]] = (row[2], row[1])
x = []
y = []
label = []
for (nom, (long, lat)) in pays.items():
    x.append(long)
    y.append(lat)
    label.append(nom)

def outputCountry(pays, size=20):
    x = []
    y = []
    label = []
    for (nom, (long, lat)) in pays.items():
        if (long > -10 and long < 40 and lat >= 35 and lat < 70):
            x.append(long)
            y.append(lat)
            label.append(nom)
    height = max(y) - min(y)
    width = max(x) - min(x)
    _, ax = plt.subplots(figsize=(size, size * height / width))
    ax.set_title("Les pays")
    ax.scatter(x, y)
    for i in range(len(x)):
        ax.text(x[i], y[i], label[i])
    plt.show()

def outputCircuit(pays, circuit, size=20):
    x = []
    y = []
    label = []
    for (nom, (long, lat)) in pays.items():
        x.append(long)
        y.append(lat)
        label.append(nom)
    height = max(y) - min(y)
    width = max(x) - min(x)
    _, ax = plt.subplots(figsize=(size, size * height / width))
    ax.set_title("Les pays")
    ax.scatter(x, y)
    for i in range(len(circuit)):
        if (i < len(circuit)-1):
            xPays1, yPays1 = pays[circuit[i]]
            xPays2, yPays2 = pays[circuit[i+1]]
        else: 
            xPays1, yPays1 = pays[circuit[i]]
            xPays2, yPays2 = pays[circuit[0]]
        x1, y1 = [xPays1, xPays2], [yPays1, yPays2]
        plt.plot(x1, y1, 'b', marker = 'o')
    for i in range(len(x)):
        ax.text(x[i], y[i], label[i])
    plt.show()


def d(pays, nomPays1, nomPays2):
    long1, lat1 = pays[nomPays1]
    long2, lat2 = pays[nomPays2]
    distance = (long2-long1)**2 + (lat2-lat1)**2
    return distance

def listingAllDistance(pays, x, y, label):
    L = []
    for i in range(len(x)-1):
        for j in range(i+1,len(x)):
            L.append(d(pays, label[i], label[j]))
    return L

def listingDistanceFromCountry(pays, xPays, yPays, namePays, x, y, label):
    L = []
    for i in range(len(x)):
        if (label[i] != namePays):
            L.append([label[i], d(pays, namePays, label[i])])
    return L

def getMin(L):
    min = L[0][1]
    nameMin = L[0][0]
    for i in range(len(L)):
        if (min > L[i][1]):
            min = L[i][1]
            nameMin = L[i][0]
    return (min, nameMin)

def minMaxMoy(L):
    min = L[0]
    max = L[0]
    moy = 0
    for i in range(len(L)):
        if (min > L[i]):
            min = L[i]
        if (max < L[i]):
            max = L[i]
        moy += L[i]
    moy /= len(L)
    return (min, max, moy)

def delCountry(x, y, label, name):
    i = 0
    while (label[i] != name):
        i += 1
    return (x[0:i]+x[i+1:],y[0:i]+y[i+1:],label[0:i]+label[i+1:])

def circuitPaysGlouton(pays, x, y, label, xInitial = x[0], yInitial = y[0], namePaysInitial = label[0]):
    namePays = namePaysInitial
    xPays = xInitial
    yPays = yInitial
    circuitPays = [namePays]
    x, y, label = delCountry(x, y, label, namePays)
    while (len(x)>0):
        namePays = getMin(listingDistanceFromCountry(pays, xPays, yPays, namePays, x, y, label))[1]
        x, y, label = delCountry(x, y, label, namePays)
        circuitPays.append(namePays)
    return circuitPays

def fonctionObjectif(pays, circuit):
    distance = 0
    for i in range(len(circuit)-1):
        distance += d(pays, circuit[i], circuit[i+1])
    distance += d(pays, circuit[len(circuit)-1], circuit[0])
    return distance

def multiGlouton(pays, x, y, label):
    minCircuit = circuitPaysGlouton(pays, x, y, label)
    minDistance = fonctionObjectif(pays, minCircuit)
    nombreAmelioration = 0
    for i in range(1, len(x)):
        circuit = circuitPaysGlouton(pays, x, y, label, x[i], y[i], label[i])
        distance = fonctionObjectif(pays, circuit)
        if (minDistance > distance):
            nombreAmelioration += 1
            minCircuit = circuit
            minDistance = distance
    print("Il y a eu ", nombreAmelioration, " ameliorations")
    return (minCircuit, minDistance)

def passeDeuxOpt(pays, circuitDecroise, circuit):
    distanceCircuit = fonctionObjectif(pays, circuit)
    distanceCircuitDecroise = fonctionObjectif(pays, circuitDecroise)
    if (distanceCircuit > distanceCircuitDecroise):
        return distanceCircuitDecroise
    else:
        return distanceCircuit

def passeGlobale(pays, circuit):
    for debut in range(len(circuit)):
        circuitDecroise = circuit[debut:]+circuit[:debut]
        circuit = passeDeuxOpt(pays, circuitDecroise , circuit)
    return circuit

"""
MAIN PROGRAM
"""

circuit, distance = multiGlouton(pays, x, y, label)
#print(distance)
#circuitOpti = passeGlobale(pays, circuit)
#print(fontionObjectif(pays, circuitOpti))
outputCircuit(pays, circuit, size=40)
