/**
 *    author:  evoPrg
 *    created: 24.12.2025 17:29:20
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while (tt--) {
        int x;
        cin >> x;
        int ans = ((x % 10) - 1) * 10 + (floor(log10(x)) + 1) * (floor(log10(x)) + 2) / 2;
        cout << ans << "\n";
    }
    return 0;
}
