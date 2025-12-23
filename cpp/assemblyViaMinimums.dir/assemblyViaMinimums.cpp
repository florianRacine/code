/**
 *    author:  evoPrg
 *    created: 23.12.2025 18:44:00
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

        int m = n * (n - 1) / 2;
        vector<long long> b(m);
        for (auto &x : b) cin >> x;

        sort(b.begin(), b.end());

        vector<long long> a;
        int idx = 0;

        // Extract a1 ... a(n-1)
        for (int cnt = n - 1; cnt >= 1; cnt--) {
            a.push_back(b[idx]);
            idx += cnt;
        }

        // Choose an (can be anything >= a[n-2])
        a.push_back(a.back());

        for (auto x : a) cout << x << " ";
        cout << "\n";    }
    return 0;
}
