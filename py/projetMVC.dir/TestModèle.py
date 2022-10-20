import Modèle 
 
def test_lit_etat():
     assert Modèle.lit_état('Tac') == 'affamé'
 
def test_lit_etat_nul():
      assert Modèle.lit_état('Bob') == None

def test_lit_lieu():
    assert Modèle.lit_lieu('Tac') == 'litière'
 
def test_lit_lieu_nul():
    assert Modèle.lit_lieu('Bob') == None

def test_vérifie_disponibilité():
    assert Modèle.vérifie_disponibilité('litière') == 'libre'
    assert Modèle.vérifie_disponibilité('nid') == 'occupé'

def test_vérifie_disponibilité_nul():
    assert Modèle.vérifie_disponibilité('nintendo') == None

def test_cherche_occupant():
    assert Modèle.cherche_occupant('nid') == ['Pocahontas']
    assert 'Tac' in Modèle.cherche_occupant('litière')
    assert 'Tac' not in Modèle.cherche_occupant('mangeoire')

def test_cherche_occupant_nul():
    assert Modèle.cherche_occupant('casino') == None

def test_change_état():
    Modèle.change_état('Totoro', 'fatigué')
    assert Modèle.lit_état('Totoro') == 'fatigué'
    Modèle.change_état('Totoro', 'excité comme un pou')
    assert Modèle.lit_état('Totoro') == 'fatigué'
    Modèle.change_état('Bob', 'fatigué')
    assert Modèle.lit_état('Bob') == None

def test_change_lieu():
    Modèle.change_lieu('Totoro', 'roue')
    assert Modèle.lit_lieu('Totoro') == 'roue'
    assert Modèle.vérifie_disponibilité('litière') == 'libre'    
    assert Modèle.vérifie_disponibilité('roue') == 'occupé'  

def test_change_lieu_occupé():
    Modèle.change_lieu('Totoro', 'nid')
    assert Modèle.lit_lieu('Totoro') == 'roue'

def test_change_lieu_nul_1():
    Modèle.change_lieu('Totoro', 'casino')
    assert Modèle.lit_lieu('Totoro') == 'roue'

def test_change_lieu_nul_2():
    Modèle.change_lieu('Bob', 'litière')
    assert Modèle.lit_lieu('Bob') == None

test_lit_etat()
test_lit_etat_nul()
test_lit_lieu()
test_vérifie_disponibilité()
test_vérifie_disponibilité_nul()
test_cherche_occupant()
test_cherche_occupant_nul()
test_change_état()
test_change_lieu()
test_change_lieu_occupé()
test_change_lieu_nul_1()
test_change_lieu_nul_2()
