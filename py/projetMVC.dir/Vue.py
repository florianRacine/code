from appJar import gui
import Modèle
import Contrôleur

def press(act):
    nomAnimal = app.getRadioButton("nomAnimal")
    action = app.getRadioButton("action")
    log = ""
    if action == "nourrir":
        log = Contrôleur.nourrir(nomAnimal)
        if log == None:
            app.infoBox("", "Félicitations, " + nomAnimal + " a rejoint le mangeoire et est maintenant repus.")
        else:
            app.warningBox("", log)
    elif action == "divertir":
        log = Contrôleur.divertir(nomAnimal)
        if log == None:
            app.infoBox("", "Félicitations, " + nomAnimal + " a rejoint la roue et est maintenant fatigué.")
        else:
            app.warningBox("", log)
    elif action == "coucher":
        log = Contrôleur.coucher(nomAnimal)
        if log == None:
            app.infoBox("", "Félicitations, " + nomAnimal + " a rejoint le nid et est maintenant endormi.")
        else:
            app.warningBox("", log)
    elif action == "réveiller":
        log = Contrôleur.réveiller(nomAnimal)
        if log == None:
            app.infoBox("", "Félicitations, " + nomAnimal + " a rejoint la litière et est maintenant affamé.")
        else:
            app.warningBox("", log)
    else:
        print("L'action n'a pas été transmis au contrôleur")
        log = "L'action n'a pas été transmis au contrôleur"
        app.warningBox("", log)
    updateWidgets()
    return None

def bienvenue():
    app.addLabel("en-tête", "Bienvenue à l'animalerie!", colspan=2)
    app.setLabelBg("en-tête", "black")
    app.setLabelFg("en-tête", "pink")
    return None

def section1():
    app.addLabel("section1", "Animaux", colspan=2)
    app.setLabelBg("section1", "gray")
    app.setLabelFg("section1", "black")
    return None

def section2():
    app.addLabel("section2", "Equipements", colspan=2)
    app.setLabelBg("section2", "gray")
    app.setLabelFg("section2", "black")

def section3():
    app.addLabel("section3", "Actions", colspan=2)
    app.setLabelBg("section3", "gray")
    app.setLabelFg("section3", "black")

def afficherEtats():
    row = app.getRow()
    for animal in liste_animaux:
        app.addLabel(animal + "0", animal + " : ", row, 0)
        app.addLabel(animal + "1", Modèle.lit_état(animal) + ", " + Modèle.lit_lieu(animal), row, 1)
        if row %2 == 0:
            app.setLabelBg(animal + "0", "lavender")
            app.setLabelBg(animal + "1", "lavender")
        else:
            app.setLabelBg(animal + "0", "white")
            app.setLabelBg(animal + "1", "white")
        app.setLabelFg(animal + "1", "black")
        app.setLabelFg(animal + "0", "black")
        app.setLabelAlign(animal + "0", "left")
        app.setLabelAlign(animal + "1", "left")
        row += 1
    return None

def afficherEquipements():
    row = app.getRow()
    for équipement in liste_équipements:
        app.addLabel(équipement + "0", équipement + " : ", row, 0)
        app.addLabel(équipement + "1", Modèle.vérifie_disponibilité(équipement), row, 1)
        if row %2 == 0:
            app.setLabelBg(équipement + "0", "lavender")
            app.setLabelBg(équipement + "1", "lavender")
        else:
            app.setLabelBg(équipement + "0", "white")
            app.setLabelBg(équipement + "1", "white")
        app.setLabelFg(équipement + "1", "black")
        app.setLabelFg(équipement + "0", "black")
        app.setLabelAlign(équipement + "0", "left")
        app.setLabelAlign(équipement + "1", "left")
        row += 1
    return None

def actions():
    row = app.getRow()
    count = row
    for a in liste_animaux:
        app.addRadioButton("nomAnimal", a, count, 0)
        count += 1
    count = row
    for c in liste_actions:
        app.addRadioButton("action", c, count, 1)
        count += 1
    app.addButton("push",  press,count+1 ,colspan=2)
    return None

def updateWidgets():
    row = app.getRow()
    for animal in liste_animaux:
        app.setLabel(animal + "0", animal + " : ")
        app.setLabel(animal + "1", Modèle.lit_état(animal) + ", " + Modèle.lit_lieu(animal))
        if row %2 == 0:
            app.setLabelBg(animal + "0", "lavender")
            app.setLabelBg(animal + "1", "lavender")
        else:
            app.setLabelBg(animal + "0", "white")
            app.setLabelBg(animal + "1", "white")
        app.setLabelFg(animal + "1", "black")
        app.setLabelFg(animal + "0", "black")
        app.setLabelAlign(animal + "0", "left")
        app.setLabelAlign(animal + "1", "left")
        row += 1
    for équipement in liste_équipements:
        app.setLabel(équipement + "0", équipement + " : ")
        app.setLabel(équipement + "1", Modèle.vérifie_disponibilité(équipement))
        if row %2 == 0:
            app.setLabelBg(équipement + "0", "lavender")
            app.setLabelBg(équipement + "1", "lavender")
        else:
            app.setLabelBg(équipement + "0", "white")
            app.setLabelBg(équipement + "1", "white")
        app.setLabelFg(équipement + "1", "black")
        app.setLabelFg(équipement + "0", "black")
        app.setLabelAlign(équipement + "0", "left")
        app.setLabelAlign(équipement + "1", "left")
        row += 1
    return None

app = gui()
liste_animaux = ['Tic', 'Tac', 'Totoro', 'Patrick', 'Pocahontas']
liste_actions = ["nourrir", "divertir", "coucher", "réveiller"]
liste_équipements = ["litière", "mangeoire", "roue", "nid"]

bienvenue()
section1()
afficherEtats()
section2()
afficherEquipements()
section3()
actions()
app.go()
