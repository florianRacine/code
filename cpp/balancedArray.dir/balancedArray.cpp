/**
 *    author:  evoPrg
 *    created: 27.10.2022 09:33:38
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n; // n%2 == 0
        if(n % 4 == 0) {
            cout << "YES" << endl;
            for (int i = 2; i <= n; i += 2) {
                cout << i << " ";
            }
            for (int i = 1; i < n-1; i += 2) {
                cout << i << " ";
            }
            cout << n-1 + n/2 << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
