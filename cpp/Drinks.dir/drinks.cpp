#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n; cin >> n;
    float p;
    float sP=0, mP;
    
    for (int i=0; i<n; i++) {
        cin >> p;
        sP += p;
    }
    mP = sP/n;
    cout << mP;
}
