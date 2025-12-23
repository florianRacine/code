/**
 *    author:  evoPrg
 *    created: 23.12.2025 17:15:05
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
        int k;
        cin >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int cur = 1, ans = 1;
        for (int i = 1; i < n; i++) {
            if (abs(a[i - 1] - a[i]) <= k) {
                cur ++;
            } else {
                cur = 1;
            }
            ans = max(ans, cur);
        }
        cout << n - ans << "\n";
    }
    return 0;
}
