/**
 *    author:  evoPrg
 *    created: 25.12.2025 14:15:58
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while (tt--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<pair<long long, int>> k(q);
        for (int i = 0; i < q; i++) {
            cin >> k[i].first;
            k[i].second = i;
        }
        sort(k.begin(), k.end());
        vector<long long> ans(q);
        long long tmp = 0;
        int j = 0;
        for (int i = 0; i < n; i++) {
            while (j < q && k[j].first < a[i]) {
                ans[k[j].second] = tmp;
                j++;
            }
            tmp += a[i];
        }
        while (j < q) {
            ans[k[j].second] = tmp;
            j++;
            
        }
        for (int i = 0; i < q; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
