#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n;
    int a, b;
    int nPassenger = 0;
    int max = 0;
    
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> a >> b;

        nPassenger += b - a;
        if (nPassenger > max) {
            max = nPassenger;
        }
    }
    cout << max;
}
