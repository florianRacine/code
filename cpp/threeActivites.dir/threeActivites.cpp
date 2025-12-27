/**
 *    author:  evoPrg
 *    created: 26.12.2025 17:28:50
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
        vector<pair<int, int>> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i].first;
            b[i].second = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> c[i].first;
            c[i].second = i;
        }

        
        // TO DO : reduce the complexity by just taking the 3 max element 
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());

        // IDEA : Check all 3! possibilities on the 3 best choice for each a, b and c

        int best = 0;
        string s = "123";
        for (int i = 0; i < 6; i++) {
            int tmp = 0;
            vector<bool> taken(n, false);
            next_permutation(s.begin(), s.end());
            for (int j = 0; j < (int) s.size(); j++) {
                if(s[j] == '1') {
                    int k = 0;
                    while (taken[a[k].second]) k++;
                    taken[a[k].second] = true;
                    tmp += a[k].first;
                }
                if(s[j] == '2') {
                    int k = 0;
                    while (taken[b[k].second]) k++;
                    taken[b[k].second] = true;
                    tmp += b[k].first;
                }
                if(s[j] == '3') {
                    int k = 0;
                    while (taken[c[k].second]) k++;
                    taken[c[k].second] = true;
                    tmp += c[k].first;
                }
            }
            best = max(best, tmp);
        }
        cout << best << "\n";
    }
    return 0;
}
