/**
 *    author:  evoPrg
 *    created: 12.10.2023 18:22:52
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> w(n);
        for (int i = 0; i < n; i++) {
            cin >> w[i];
        }
        vector<int> wp;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                wp.push_back(w[i] + w[j]);
            }
        }
        unordered_map <int, int> occ;
        vector<int> wo;
        for (int i = 0; i < (int) wp.size(); i++) {
            if (occ[wp[i]] == 0) {
                wo.push_back(wp[i]);
            }
            occ[wp[i]] ++;
        }
        int max = 0, wMax = 0;
        for (int i = 0; i < (int) wo.size(); i++) {
            if (occ[wo[i]] > max) {
                max = occ[wo[i]];
                wMax = wo[i];
            }
        }
        int res = 0;
        unordered_map <int, int> id;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (wMax == w[i] + w[j] && id[i] == 0 && id[j] == 0) {
                    res ++;
                    id[i]++;
                    id[j]++;
                    break;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
