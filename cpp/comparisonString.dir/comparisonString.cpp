/**
 *    author:  evoPrg
 *    created: 23.12.2025 16:04:55
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
        string s;
        cin >> s;
        int curr = 1, ans = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                curr ++;
            } else {
                curr = 1;
            }
            ans = max(ans, curr);
        }
        cout << ans + 1 << "\n";
    }
    return 0;
}
