#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


typedef struct Element
{
    int nombre;
    Element *suivant;
} Element;


Element* initialisation(int nbElements)
{
    printf("\nInitialisation de la liste avec %d éléments\n----------\n",nbElements); 
    Element* premierElement = NULL;
    Element* element=NULL;
    Element* nouvelElement;

    int compteurElements=0;

    while (compteurElements<nbElements)
    {
        nouvelElement = (Element*) malloc(1*sizeof(Element));
        nouvelElement->nombre = 1000-compteurElements; //Juste pour avoir des valeurs
        nouvelElement->suivant=NULL;
        compteurElements++;
        printf("On vient de créer l'élément %d avec la valeur %d\n",compteurElements,nouvelElement->nombre);

        if (premierElement == NULL) premierElement=element=nouvelElement;
        else 
        {
            element->suivant=nouvelElement;
            element = element->suivant;
        }
    }

    return premierElement;
}

void affiche_liste(Element* premierElement)
{
    printf("\nOn affiche la liste élément après élément\n---------\n");
    Element* element=premierElement;
    int compteur=0;
    while (element)
    {
        compteur++;
        printf("Element %d = %d\n",compteur,element->nombre);
        element = element->suivant;
    }
    printf("Il y avait donc %d éléments (on le sait maintenant qu'on les a comptés un par un)\n\n",compteur);
}

void detruire_liste(Element* premierElement)
{
    printf("\nDestruction\n---------\nOn désalloue=libère=détruit les éléments les uns derrière les autres mais en mémorisant le suivant avant de détruire l'élément courant");
    Element* element=premierElement;
    Element* prochain;

    while (element)
    {
        prochain = element->suivant; // Je stocke le suivant avant de détruire/libérer l'élément courant
        free(element); // Je libère l'élément courant
        element=prochain; // l'élément courant devient le prochain (on avance donc)
    }
    free(element);
}

int32_t main() 
{
    Element* premierElement = initialisation(7);
    affiche_liste(premierElement);
    detruire_liste(premierElement);
    printf("\n\nFin programme\n");
}

