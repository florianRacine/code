/**
 *    author:  evoPrg
 *    created: 05.08.2022 12:42:10
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, k; cin >> n >> k;
        int n1 = n - (k - 1);
        if (n1 > 0 && n1 % 2 == 1) {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i) cout << "1 ";
            cout << n1 << endl;
        }
        int n2 = n - 2 * (k - 1);
        if (n2 > 0 && n2 % 2 == 0) {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i) cout << "2 ";
            cout << n2 << endl;
        }
        cout << "NO" << endl;
    }
    return 0;
}
