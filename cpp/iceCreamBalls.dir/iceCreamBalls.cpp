/**
 *    author:  evoPrg
 *    created: 26.09.2023 12:32:06
**/
#include <bits/stdc++.h>

using namespace std;

// Fonction pour calculer le nombre minimum de boules nécessaires
long long minBalls(long long n) {
    long long left = 1;
    long long right = n;

    while (left < right) {
        long long mid = left + (right - left) / 2;
        
        // Si le nombre de boules est suffisant pour fabriquer n types de glaces,
        // nous réduisons la recherche dans la moitié inférieure.
        if (mid * 2 >= n) {
            right = mid;
        }
        // Sinon, nous augmentons le nombre de boules minimum.
        else {
            left = mid + 1;
        }
    }

    return left * 2; // Le résultat final est multiplié par 2 car chaque type de glace nécessite 2 boules.
}

int main() {
    int tt; cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;

        long long minBallsRequired = minBalls(n);       
        cout << minBallsRequired << endl;
    }
    return 0;
}
