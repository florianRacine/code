#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

class Vehicule {
    public:
        Vehicule(int a) {
            cout << "Constructor" << endl;
            countWheel = a;
        }
        void getCountWheel() {
            cout << countWheel << endl;
        }
    protected:
        int countWheel;
};

class Voiture : public Vehicule {
    public:
        int name;
    
};
 
int32_t main() {
    int a =4;
    Voiture ob(a);
    

    
}
