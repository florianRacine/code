/**
 *    author:  evoPrg
 *    created: 12.11.2022 19:35:53
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; // n = (int) s.size()
        string s;
        cin >> n >> s;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            bool stop = false;
            int countDist = 0;
            int occ[10]{}; // occ = {O, 0, ..., 0}
            for (int j = i; j < n && stop == false; j++) {
                if (occ[s[j] - '0'] == 0) countDist ++;
                occ[s[j] - '0']++;
                bool isDiverse = true;
                for (int k = 0; k < 10; k++) {
                    if (occ[k] > countDist) isDiverse = false;
                    if (occ[k] > 10) stop = true;
                }
                if (isDiverse) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
