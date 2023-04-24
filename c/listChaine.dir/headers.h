// structure pour stocker un élément de la liste chaînée
struct Element
{
    int valeur;
    struct Element* suivant;
};

// structure pour stocker la tête de la liste chaînée
struct Tete
{
    struct Element* premier;
};

int taille_liste_chaine(struct Tete* tete);
struct Tete* initialisation_liste_chaine();
void insertion_debut_liste_chaine(struct Tete* tete, int nvValeur);
void insertion_milieu_liste_chaine(struct Tete* tete, int i, int nvValeur);
void supprimer_debut_liste_chaine(struct Tete* tete);
void supprimer_milieu_liste_chaine(struct Tete* tete, int i);
void afficher_liste_chaine(struct Tete* tete);
void destruction_liste_chaine(struct Tete* tete);
void inverser_liste_chaine(struct Tete* tete);
