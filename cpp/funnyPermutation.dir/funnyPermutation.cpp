/**
 *    author:  evoPrg
 *    created: 25.10.2022 21:22:43
**/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    if (n == 2) {
        cout << "2 1";
    } else if (n == 3) {
        cout << "-1";
    } else {
        cout << n-1 << " " << n << " ";
        for (int i = 1; i < n-1; i++) {
            cout << i << " ";
        }    
    }
}

int main() {
    int tt; cin >> tt;
    while (tt--) {
        solve();
        cout << endl;
    }
    return 0;
}
