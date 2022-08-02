#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int t; cin >> t;
    for (int i=0; i<t; i++) {
        int n; cin >> n;
        if (n%2) {
            cout << n/2 << endl;
        } else {
            cout << n/2-1 << endl;
        }
    }
}
