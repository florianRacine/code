/**
 *    author:  evoPrg
 *    created: 29.10.2023 17:19:42
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        int a = 0, b = 0;
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        for (int i = 0; i < n; i++) {
            if (c[i] == c[0] && a < k) {
                a++;
            } 
            if (c[i] == c[n - 1] && a >= k) {
                b++;
            }
        }
        if ((c[0] != c[n - 1] && a >= k && b >= k) || (c[0] == c[n - 1] && a >= k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
