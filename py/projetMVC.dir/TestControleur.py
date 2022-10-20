import Contrôleur 
import Modèle
 
def test_nourrir():
    if Modèle.vérifie_disponibilité('mangeoire') == 'libre' and Modèle.lit_état('Tic') == 'affamé':
        Contrôleur.nourrir('Tic')
    assert Modèle.vérifie_disponibilité('mangeoire') == 'occupé'
    assert Modèle.lit_état('Tic') == 'repus'
    assert Modèle.lit_lieu('Tic') == 'mangeoire'
    Contrôleur.nourrir('Tac')
    assert Modèle.lit_état('Tac') == 'affamé'
    assert Modèle.lit_lieu('Tac') == 'litière'
    Contrôleur.nourrir('Pocahontas')
    assert Modèle.lit_état('Pocahontas') == 'endormi'
    assert Modèle.lit_lieu('Pocahontas') == 'nid'
    Contrôleur.nourrir('Bob')
    assert Modèle.lit_état('Bob') == None
    assert Modèle.lit_lieu('Bob') == None
    assert Modèle.vérifie_disponibilité('mangeoire') == 'occupé'

def test_coucher():
    if Modèle.vérifie_disponibilité('roue') == 'libre' and Modèle.lit_état('Tic') == 'repus':
        Contrôleur.divertir('Tic')
    assert Modèle.vérifie_disponibilité('roue') == 'occupé'
    assert Modèle.lit_état('Tic') == 'repus'
    assert Modèle.lit_lieu('Tic') != 'roue'
    Contrôleur.divertir('Tac')
    assert Modèle.lit_lieu('Tac') != 'roue'
    Contrôleur.divertir('Pocahontas')
    assert Modèle.lit_état('Pocahontas') == 'endormi'
    assert Modèle.lit_lieu('Pocahontas') == 'nid'
    Contrôleur.divertir('Bob')
    assert Modèle.lit_état('Bob') == None
    assert Modèle.lit_lieu('Bob') == None
    assert Modèle.vérifie_disponibilité('roue') == 'occupé'

#test_nourrir()
test_coucher()
