import json

def lit_état(nomAnimal):
    with open('animal.json', "r") as f:
        animal = json.load(f)
    try :
        etat = animal[nomAnimal]["ETAT"]
        return etat
    except :
        print("Désolé, " + nomAnimal + " n'est pas un animal connu")
        return None

def lit_lieu(nomAnimal):
    with open('animal.json', "r") as f:
        animal = json.load(f)
    try :
        lieu = animal[nomAnimal]["LIEU"]
        return lieu
    except :
        print("Désolé, " + nomAnimal + " n'est pas un animal connu")
        return None

def vérifie_disponibilité(nomEquipement):
    with open('équipement.json', "r") as f:
        équipement = json.load(f)
    try :
        disponibilité = équipement[nomEquipement]["DISPONIBILIT\u00c9"]
        return disponibilité
    except :
        print("Désolé, " + nomEquipement + " n'est pas un équipement reconnu")
        return None

def cherche_occupant(lieu):
    with open('animal.json', "r") as f:
        animal = json.load(f)
    occupant = []
    try:
        with open('équipement.json', "r") as f:
            équipement = json.load(f)
        for v in animal.items():
            if v[1]["LIEU"] == lieu:
                occupant.append(v[0])
        return occupant
    except:
        return None

def change_état(nomAnimal, état):
    if état in ["affamé", "fatigué", "repus", "endormi"]:
        with open('animal.json', "r") as f:
            animal = json.load(f)
        try:
            animal[nomAnimal]["ETAT"] = état
            json.dump(animal, open("animal.json", "w"), indent=4)
        except:
            print("Désolé, " + nomAnimal + " n'est pas un nom reconnu")
    else:
        print("Désolé, " + état + " n'est pas un état reconnu")

def change_lieu(nomAnimal, lieu):
    if lieu in ["litière", "mangeoire", "roue", "nid"]:
        with open('équipement.json', "r") as e:
            équipement = json.load(e)
        with open('animal.json', "r") as f:
            animal = json.load(f)
        try:
            if (lieu in ["mangeoire", "roue", "nid"] and équipement[lieu]["DISPONIBILIT\u00c9"] == "libre") or (lieu == "litière"):
                équipement[animal[nomAnimal]["LIEU"]]["DISPONIBILIT\u00c9"] = "libre"
                animal[nomAnimal]["LIEU"] = lieu
                if lieu != "litière":
                    équipement[lieu]["DISPONIBILIT\u00c9"] = "occupé"
                json.dump(animal, open("animal.json", "w"), indent=4)
                json.dump(équipement, open("équipement.json", "w"), indent=4)
            else:
                print("Désolé, le lieu ", lieu, " est déjà occupé")
        except:
                print("Désolé, " + nomAnimal + " n'est pas un nom reconnu")
    else:
        print("Désolé, " + lieu + " n'est pas un lieu reconnu")

