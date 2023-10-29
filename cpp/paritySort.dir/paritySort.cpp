/**
 *    author:  evoPrg
 *    created: 29.10.2023 16:58:50
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        bool ans = true;
        for (int i = 0; i < n; i++) {
            if (b[i] % 2 != a[i] % 2) {
                ans = false;
                break;
            }
        }
        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
