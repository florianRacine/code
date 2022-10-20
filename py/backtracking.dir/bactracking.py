# Variables gloabales
n = 4
m = 4
echiquier = [[0]*n]*m

def placerDame(i, j, echiquier):
    echiquier[i][j] = 1
    return echiquier

def retirerDame(i, j, echiquier):
    echiquier[i][j] = 0
    return echiquier

def dameBienPlace(n, m, i, j, echiquier):
    #Pas d'autre dame placé sur la même ligne
    for k in range(n):
        ligne = i
        colonne = k
        if (echiquier[ligne][colonne] == 1):
            return False
    #Pas d'autre dame placé sur la même colonne
    for k in range(m):
        ligne = k
        colonne = j
        if (echiquier[ligne][colonne] == 1):
            return False
    #Pas d'autre dame placé sur la même diagonale (gauche/haut, droite/bas)
    for k in range(min(n, m)):
        #Si on est sous la diagonale de l'échiquier
        if (i >= j):
            ligne = i-j + k
            colonne = 0 + k
        else:
            ligne = 0 + k
            colonne = j-i + k
        if (echiquier[ligne][colonne] == 1):
            return False
    #Pas d'autre dame placé sur la même diagonale (gauche/bas, droite/haut)
    for k in range(min(n, m)):
        #Si on est sous la diagonale de l'échiquier
        
        
def backtracking(n, m, i, echiquier):
    for j in range(m):

