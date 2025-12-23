/**
 *    author:  evoPrg
 *    created: 23.12.2025 16:43:33
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = a[0];
        for (int i = 1; i < n; i++) {
            ans &= a[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
