/**
 *    author:  evoPrg
 *    created: 24.12.2025 14:32:58
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
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i + 1;
        }
        sort(a.begin(), a.end());
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                long long prod = 1LL * a[i].first * a[j].first;
                if (prod > 2 * n) break;
                if (prod == a[i].second + a[j].second) count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
