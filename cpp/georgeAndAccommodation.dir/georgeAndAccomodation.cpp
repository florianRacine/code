#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n; cin >> n;
    int p, q;
    int countFreePlace = 0;
    for (int i=0; i<n; i++) {
        cin >> p >> q;
        if (q - p >= 2) {
            countFreePlace++;
        }
    }
    cout << countFreePlace;
    return 0;
}

