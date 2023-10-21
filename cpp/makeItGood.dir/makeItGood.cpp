/**
 *    author:  evoPrg
 *    created: 06.08.2022 12:19:09
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = n - 1;
        while (ans > 0 && a[ans] <= a[ans - 1]) {
            ans --;
        }
        while (ans > 0 && a[ans] >= a[ans - 1]) {
            ans --;
        }
        cout << ans << endl;
    }
    return 0;
}
