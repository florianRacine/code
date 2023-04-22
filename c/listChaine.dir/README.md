<h1> Librairie Liste chaînée </h1>

Le programme en C fourni dans ce fichier est un exemple de manipulation d'une liste chaînée. La liste chaînée est une structure de données dynamique qui permet de stocker une collection d'éléments de manière séquentielle en utilisant des liens entre eux.

<h2> Structure de la liste chaînée </h2>

La liste chaînée est constituée d'une suite d'éléments de type struct Element. Chaque élément contient une valeur de type int et un pointeur vers l'élément suivant dans la liste.

La structure de l'élément est définie comme suit :

```c
struct Element
{
    int valeur;
    struct Element* suivant;
};
```

Pour manipuler la liste, on utilise une structure struct Tete qui contient un pointeur vers le premier élément de la liste. Cette structure est définie comme suit :

```c
struct Tete
{
    struct Element* premier;
};
```

<h2> Fonctions disponibles </h2>

La librairie fournit les fonctions suivantes pour manipuler une liste chaînée :

* `initialisation_liste_chaine()`
Cette fonction crée une nouvelle liste chaînée vide et renvoie un pointeur vers sa tête.

* `insertion_debut_liste_chaine(struct Tete* tete, int nvValeur)`
Cette fonction insère une nouvelle valeur au début de la liste chaînée spécifiée.

* `insertion_milieu_liste_chaine(struct Tete* tete, int i, int nvValeur)`
Cette fonction insère une nouvelle valeur à l'indice spécifié dans la liste chaînée.

* `supprimer_debut_liste_chaine(struct Tete* tete)`
Cette fonction supprime le premier élément de la liste chaînée spécifiée.

* `supprimer_milieu_liste_chaine(struct Tete* tete, int i)`
Cette fonction supprime l'élément à l'indice spécifié dans la liste chaînée.

* `afficher_liste_chaine(struct Tete* tete)`
Cette fonction affiche les éléments de la liste chaînée spécifiée.

* `taille_liste_chaine(struct Tete* tete)`
Cette fonction renvoie la taille de la liste chaînée spécifiée.

* `destruction_liste_chaine(struct Tete* tete)`
Cette fonction détruit la liste chaînée spécifiée.

* `inverser_liste_chaine(struct Tete* tete)`
Cette fonction inverse l'ordre des éléments dans la liste chaînée spécifiée.
