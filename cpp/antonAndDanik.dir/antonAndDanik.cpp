#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n;
    string games;
    int countWinAnton = 0;

    cin >> n >> games;

    for (int i=0; i<n; i++) {
        if (games[i] == 'A') {
            countWinAnton++;
        }
    }
    if (countWinAnton > (int) games.size() - countWinAnton) {
        cout << "Anton";
    } else if (countWinAnton < (int) games.size() - countWinAnton) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    } 
    return 0;
}
