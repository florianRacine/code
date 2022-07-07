#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    ll k, n, w;
    cin >> k >> n >> w;
    ll costTotal;
    int nToBorrow;
    costTotal = k*(w*(w+1)/2);
    nToBorrow = n - costTotal;
    if (nToBorrow >= 0) {
        cout << 0;
    } else {
        cout << - nToBorrow;
    }
}
