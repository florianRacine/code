#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
struct typeFiche {
    char[25] prenom,nom;
    int codePostal;
    char[10] ville;
    typeFiche* fichePrecedente,ficheSuivante;
}

class CarnetDAdresses {
    public :
        typeFiche* premiereFiche,derniereFiche;

        CarnetDAdresses();
        ~CarnetDAdresse();
        void ajouterFiche(typeFiche* fiche);
        


    private :
}


void CarnetDAdresses::CarnetDAdresse() {
    premiereFiche=derniereFiche=nil;
}


void ajouterFiche(typeFiche* fiche) {
    if (premiereFiche==nil)
    {
        // ma liste est vide
        premiereFiche=derniereFiche=fiche;
    }
    else
    {
        f=premiereFiche;
        while (  f!=nil && *f.codePostal < *fiche.codePostal) {
        f = *f.ficheSuivante;
        }

        if (f==nil) {
            // La fiche à insérer est à classer en dernière position
            *derniereFiche.ficheSuivante=fiche;
            *fiche.ficheSuivante=nil;
            *fiche.fichePrecedente=derniereFiche;
            derniereFiche=fiche;
        }
        else {
            // On est entre le début et la fin du carnet d'adresses
            *fiche.fichePrecedente = *f.fichePrecedente;
            *fiche.ficheSuivante = f;
            *(*fiche.fichePrecedente).ficheSuivante=fiche;
            *f.fichePrecedente=fiche;
        }
    }

}



int32_t main() {
    CarnetDAdresses c;
    typeFiche* maFiche;
    mafiche = new typeFiche*;

    *maFiche.prenom='Florian';
    *mafiche.codePostal = 95270;

    c.ajouterFiche(maFiche);


}
