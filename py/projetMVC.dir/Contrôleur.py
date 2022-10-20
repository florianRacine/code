import json

def nourrir(nomAnimal):
    with open('équipement.json', "r") as f:
                équipement = json.load(f)
    with open('animal.json', "r") as f:
                animal = json.load(f)
    if équipement["mangeoire"]["DISPONIBILIT\u00c9"] == "occupé":
        for v in animal.items():
                    if v[1]["LIEU"] == "mangeoire":
                        occupant = v[0]
        print("Impossible, la mangeoire est actuellement occupée par", occupant)
        return "Impossible, la mangeoire est actuellement occupée par " + occupant
    elif animal[nomAnimal]["ETAT"] != "affamé":
        print("Désolé,", nomAnimal, "n'a pas faim!")
        return "Désolé, " + nomAnimal + "n'a pas faim!"
    else:
        équipement[animal[nomAnimal]["LIEU"]]["DISPONIBILIT\u00c9"] = "libre"
        animal[nomAnimal]["LIEU"] = "mangeoire"
        animal[nomAnimal]["ETAT"] = "repus"
        équipement["mangeoire"]["DISPONIBILIT\u00c9"] = "occupé"
        json.dump(animal, open("animal.json", "w"), indent=4)
        json.dump(équipement, open("équipement.json", "w"), indent=4)
        return None

def divertir(nomAnimal):
    with open('équipement.json', "r") as f:
                équipement = json.load(f)
    with open('animal.json', "r") as f:
                animal = json.load(f)
    if équipement["roue"]["DISPONIBILIT\u00c9"] == "occupé":
        for v in animal.items():
                    if v[1]["LIEU"] == "roue":
                        occupant = v[0]
        print("Impossible, la roue est actuellement occupée par", occupant)
        return "Impossible, la roue est actuellement occupée par " + occupant
    elif animal[nomAnimal]["ETAT"] != "repus":
        print("Désolé,", nomAnimal, "n'est pas en état de faire du sport!")
        return "Désolé, " + nomAnimal + " n'est pas en état de faire du sport!"
    elif animal[nomAnimal]["ETAT"] == "repus" and équipement["roue"]["DISPONIBILIT\u00c9"] == "libre":
        équipement[animal[nomAnimal]["LIEU"]]["DISPONIBILIT\u00c9"] = "libre"
        animal[nomAnimal]["LIEU"] = "roue"
        animal[nomAnimal]["ETAT"] = "fatigué"
        équipement["roue"]["DISPONIBILIT\u00c9"] = "occupé"
        json.dump(animal, open("animal.json", "w"), indent=4)
        json.dump(équipement, open("équipement.json", "w"), indent=4)
        return None
    else:
        return None

def coucher(nomAnimal):
    with open('équipement.json', "r") as f:
                équipement = json.load(f)
    with open('animal.json', "r") as f:
                animal = json.load(f)
    if équipement["nid"]["DISPONIBILIT\u00c9"] == "occupé":
        for v in animal.items():
                    if v[1]["LIEU"] == "nid":
                        occupant = v[0]
        print("Impossible, le nid est actuellement occupée par", occupant)
        return "Impossible, le nid est actuellement occupée par " + occupant
    elif animal[nomAnimal]["ETAT"] != "fatigué":
        print("Désolé,", nomAnimal, "n'est pas fatigué!")
        return "Désolé, " + nomAnimal + " n'est pas fatigué!"
    elif animal[nomAnimal]["ETAT"] == "fatigué" and équipement["nid"]["DISPONIBILIT\u00c9"] == "libre":
        équipement[animal[nomAnimal]["LIEU"]]["DISPONIBILIT\u00c9"] = "libre"
        animal[nomAnimal]["LIEU"] = "nid"
        animal[nomAnimal]["ETAT"] = "endormi"
        équipement["nid"]["DISPONIBILIT\u00c9"] = "occupé"
        json.dump(animal, open("animal.json", "w"), indent=4)
        json.dump(équipement, open("équipement.json", "w"), indent=4)
        return None
    else:
        return None

def réveiller(nomAnimal):
    with open('équipement.json', "r") as f:
                équipement = json.load(f)
    with open('animal.json', "r") as f:
                animal = json.load(f)
    if animal[nomAnimal]["ETAT"] != "endormi":
        print("Désolé,", nomAnimal, "ne dort pas!")
        return "Désolé, " + nomAnimal + " ne dort pas!"
    else:
        animal[nomAnimal]["LIEU"] = "litière"
        animal[nomAnimal]["ETAT"] = "affamé"
        équipement["nid"]["DISPONIBILIT\u00c9"] = "libre"
        json.dump(animal, open("animal.json", "w"), indent=4)
        json.dump(équipement, open("équipement.json", "w"), indent=4)
        return None
