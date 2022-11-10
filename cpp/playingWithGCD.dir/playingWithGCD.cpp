/**
 *    author:  evoPrg
 *    created: 03.11.2022 17:39:08
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        int a[n];
        bool ans = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n-1; i++) {
            if (a[i] < a[i+1] or (i > 0 and ((a[i]*a[i+1])%a[i-1] == 0) and (a[i] != a[i-1]) and (a[i+1] != a[i-1]))) {
                ans = false;
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
