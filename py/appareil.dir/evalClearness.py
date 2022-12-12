from PIL import Image
import numpy as np
import matplotlib.pyplot as plt
from scipy.signal import find_peaks

def lissage(Lx, Ly, p):
    Lxout=[]
    Lyout=[]
    Lxout = Lx[p: -p]
    for index in range(p, len(Ly)-p):
        average = sum(Ly[index-p : index+p+1]) / (2*p + 1)
        Lyout.append(average)
            
    return Lxout,Lyout

col = Image.open("touchePiano.jpg")
col = col.rotate(90)
gray = col.convert('L')

weight, height = gray.size

bw = gray.point(lambda x: 0 if x<80 else 255, '1')

countCols = []

for x in range (weight):
    countCol = 0
    for y in range (height):
        if (bw.getpixel((x,y)) == 255):
            countCol += 1
    countCols.append(countCol)

x = np.linspace(1, weight, weight)
y = countCols

x, y = lissage(x, y, 10)

countPiano = find_peaks(y, prominence=6)

print(len(countPiano[0]))
print(countPiano[0])

bw.show()

for v in countPiano[0]:
    for i in range(height):
        col.putpixel((v, i), (255, 0, 0))


plt.plot(x, y)
plt.show()

col.show()
