#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

// Fonction pour calculer la taille d'une liste chaînée
int taille_liste_chaine(struct Tete* tete) {
    // Initialisation de la taille à 0
    int taille = 0;
    // Déclaration d'un pointeur "element" pour parcourir la liste chaînée à partir de son premier élément
    struct Element* element = tete -> premier;
    // Tant que "element" n'est pas NULL, on ajoute 1 à la taille et on passe à l'élément suivant
    while (element != NULL) {
        taille ++;
        element = element -> suivant;
    }
    // On retourne la taille de la liste chaînée
    return taille;
}

// fonction pour initialiser une nouvelle liste chaînée vide
struct Tete* initialisation_liste_chaine() {
    // allouer de la mémoire pour un nouvel élément et initialiser sa valeur à 0
    struct Element* element = malloc(sizeof(*element));
    if (element == NULL) {
        printf("Erreur : impossible d'allouer de la mémoire pour l'élément\n");
        exit(EXIT_FAILURE);
    }
    element -> valeur = 0;
    element -> suivant = NULL;
    // allouer de la mémoire pour une nouvelle tête et la lier à l'élément initial
    struct Tete* tete = malloc(sizeof(*tete));
    if (tete == NULL) {
        printf("Erreur : impossible d'allouer de la mémoire pour la tête\n");
        exit(EXIT_FAILURE);
    }
    tete -> premier = element;
    return tete;
}

// fonction pour insérer un nouvel élément au début de la liste chaînée
void insertion_debut_liste_chaine(struct Tete* tete, int nvValeur) {
    // allouer de la mémoire pour un nouvel élément et le lier à la tête
    struct Element* element = malloc(sizeof(*element));
    if (element == NULL) {
        printf("Erreur : impossible d'allouer de la mémoire pour l'élément\n");
        exit(EXIT_FAILURE);
    }
    element -> valeur = nvValeur;
    element -> suivant = tete -> premier;
    tete -> premier = element;
    return ;
}

// fonction pour insérer un nouvel élément au milieu de la liste chaînée (après l'élément i)
void insertion_milieu_liste_chaine(struct Tete* tete, int i, int nvValeur) {
    if (i < 0) {
        printf("Erreur : l'indice doit être supérieur ou égal à 0\n");
        return ;
    }
    if (i > taille_liste_chaine(tete)) {
        printf("Erreur : l'indice est supérieur à la taille de la liste\n");
        return ;
    }
    // parcourir la liste jusqu'à l'élément i
    struct Element* element = tete -> premier;
    int j = 0;
    while (element != NULL && j < i) {
        j++;
        element = element -> suivant;
    }
    // insérer le nouvel élément après l'élément i
    struct Element* tmp = element -> suivant;
    struct Element* nvElement = malloc(sizeof(*nvElement));
    if (nvElement == NULL) {
        printf("Erreur : impossible d'allouer de la mémoire pour l'élément\n");
        exit(EXIT_FAILURE);
    }
    element -> suivant = nvElement;
    nvElement -> suivant = tmp;
    nvElement -> valeur = nvValeur;
    return ;
}

// fonction pour supprimer le premier élément de la liste chaînée
void supprimer_debut_liste_chaine(struct Tete* tete) {
    if (tete -> premier == NULL) {
        printf("Erreur : la liste est vide\n");
        return ;
    }
    // déplacer la tête pour pointer sur le deuxième élément et libérer la mémoire du premier
    struct Element* element = tete -> premier;
    tete -> premier = element -> suivant;
    free(element);
    return ;
}

// fonction pour supprimer un élément au milieu de la liste chaînée (l'élément i)
void supprimer_milieu_liste_chaine(struct Tete* tete, int i) {
    if (i < 0) {
        printf("Erreur : l'indice doit être supérieur ou égal à 0\n");
        return ;
    }
    // parcourir la liste jusqu'à l'élément i-1
    struct Element* element = tete -> premier;
    int j = 0;
    while (element != NULL && j < i-1) {
        element = element -> suivant;
        j++;
    }
    // supprimer l'élément i et réunir la liste
    struct Element* tmp = (element -> suivant) -> suivant;
    free(element -> suivant);
    element -> suivant = tmp;
    return ;
}

// Fonction pour afficher les éléments d'une liste chaînée
void afficher_liste_chaine(struct Tete* tete) {
    if (tete == NULL || tete->premier == NULL) {
        printf("La liste est vide.\n");
        return;
    }
    // Déclaration d'un pointeur "element" pour parcourir la liste chaînée à partir de son premier élément
    struct Element* element = tete -> premier;
    // Tant que "element" n'est pas NULL, on affiche sa valeur et on ajoute une flèche si l'élément suivant existe
    while (element != NULL) {
        printf("%d ", element -> valeur);
        if (element -> suivant != NULL) printf("-> ");
        // On passe à l'élément suivant
        element = element -> suivant;
    }
    // On passe à la ligne suivante pour un affichage clair
    printf("\n");
    return ;
}

// Fonction pour libérer l'espace mémoire occupé par une liste chaînée
void destruction_liste_chaine(struct Tete* tete) {
    if (tete == NULL) {
        printf("La liste est déjà vide.\n");
        return;
    }
    // Déclaration d'un pointeur "element" pour parcourir la liste chaînée à partir de son premier élément
    struct Element* element = tete -> premier;
    // Déclaration d'un pointeur "old_element" pour stocker l'élément précédent à "element"
    struct Element* old_element = tete -> premier;
    // Tant que "element" n'est pas NULL, on libère l'espace mémoire occupé par "old_element" et on passe à l'élément suivant
    while (element != NULL) {
        old_element = element;
        element = element -> suivant;
        free(old_element);
    }
    // On libère l'espace mémoire occupé par la structure "tete"
    free(tete);
    return ;
}

// Fonction pour inverser l'ordre des éléments d'une liste chaînée
void inverser_liste_chaine(struct Tete* tete) {
    if (tete == NULL || tete->premier == NULL || tete->premier->suivant == NULL) {
        printf("La liste est trop courte pour être inversée.\n");
        return;
    }
    // Déclaration de deux pointeurs "prev_element" et "element" pour inverser les liens entre les éléments de la liste chaînée
    struct Element* prev_element = tete -> premier;
    struct Element* element = prev_element -> suivant;
    // On coupe le lien de "prev_element" avec l'élément suivant pour qu'il devienne le dernier élément de la liste chaînée inversée
    prev_element -> suivant = NULL;
    // Tant que "element" n'est pas NULL, on inverse les liens entre les éléments et on passe à l'élément suivant
    while (element != NULL) {
        // On stocke l'élément suivant à "element" avant d'invers
        struct Element* tmp_element = element -> suivant;
        element -> suivant = prev_element;
        prev_element = element;
        if (tmp_element == NULL) tete -> premier = element;
        element = tmp_element;
    }
    return ;
}
