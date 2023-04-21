#include <stdio.h>
#include <stdlib.h>

struct Element
{
    int valeur;
    struct Element* suivant;
};

struct Tete
{
    struct Element* premier;
};

struct Tete* initialisation_liste_chaine() {
    struct Element* element = malloc(sizeof(*element));
    element -> valeur = 0;
    element -> suivant = NULL;
    struct Tete* tete = malloc(sizeof(*tete));
    tete -> premier = element;
    return tete;
}

void insertion_debut_liste_chaine(struct Tete* tete, int nvValeur) {
    struct Element* element = malloc(sizeof(*element));
    element -> valeur = nvValeur;
    element -> suivant = tete -> premier;
    tete -> premier = element;
    return ;
}

// i correspond à l'indice de l'élément précédent l'élément qui sera inséré
void insertion_milieu_liste_chaine(struct Tete* tete, int i, int nvValeur) {
    struct Element* element = tete -> premier;
    int j = 0;
    while (element != NULL && j < i) {
        j++;
        element = element -> suivant;
    }
    struct Element* tmp = element -> suivant;
    struct Element* nvElement = malloc(sizeof(*nvElement));
    element -> suivant = nvElement;
    nvElement -> suivant = tmp;
    nvElement -> valeur = nvValeur;
    return ;
}

void supprimer_debut_liste_chaine(struct Tete* tete) {
    struct Element* element = tete -> premier;
    tete -> premier = element -> suivant;
    free(element);
    return ;
}

// i correspond à l'indice de l'élément à supprimer
void supprimer_milieu_liste_chaine(struct Tete* tete, int i) {
    struct Element* element = tete -> premier;
    int j = 0;
    while (element != NULL && j < i-1) {
        element = element -> suivant;
        j++;
    }
    struct Element* tmp = (element -> suivant) -> suivant;
    free(element -> suivant);
    element -> suivant = tmp;
    return ;
}

void afficher_liste_chaine(struct Tete* tete) {
    struct Element* element = tete -> premier;
    while (element != NULL) {
        printf("%d ", element -> valeur);
        if (element -> suivant != NULL) printf("-> ");
        element = element -> suivant;
    }
    printf("\n");
    return ;
}

int taille_liste_chaine(struct Tete* tete) {
    int taille = 0;
    struct Element* element = tete -> premier;
    while (element != NULL) {
        taille ++;
        element = element -> suivant;
    }
    return taille;
}

void destruction_liste_chaine(struct Tete* tete) {
    struct Element* element = tete -> premier;
    struct Element* old_element = tete -> premier;
    while (element != NULL) {
        old_element = element;
        element = element -> suivant;
        free(old_element);
    }
    free(tete);
    return ;
}

void inverser_liste_chaine(struct Tete* tete) {
    struct Element* prev_element = tete -> premier;
    struct Element* element = prev_element -> suivant;
    prev_element -> suivant = NULL;
    while (element != NULL) {
        struct Element* tmp_element = element -> suivant;
        element -> suivant = prev_element;
        prev_element = element;
        if (tmp_element == NULL) tete -> premier = element;
        element = tmp_element;
    }
    return ;
}

int main () {
    struct Tete* tete = initialisation_liste_chaine();
    insertion_debut_liste_chaine(tete, 5);
    insertion_debut_liste_chaine(tete, 4);
    insertion_debut_liste_chaine(tete, 3);
    insertion_debut_liste_chaine(tete, 2);
    insertion_debut_liste_chaine(tete, 1);
    afficher_liste_chaine(tete);
    insertion_milieu_liste_chaine(tete, 2, 10);
    afficher_liste_chaine(tete);
    supprimer_milieu_liste_chaine(tete, 2);
    afficher_liste_chaine(tete);
    printf("%d \n", taille_liste_chaine(tete));
    inverser_liste_chaine(tete);
    afficher_liste_chaine(tete);
    destruction_liste_chaine(tete);
    return 0;
}
