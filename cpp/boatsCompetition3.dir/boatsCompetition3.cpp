/**
 *    author:  evoPrg
 *    created: 14.10.2023 16:54:17
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
        int k_max = 0;
        for (int s = 2; s <= 2 * n; s++) {
            unordered_map <int, int> occ;
            int k = 0;
            for (int i = 0; i < n; i++) {
                if (s - w[i] > 0 && occ[s - w[i]] > 0) {
                    occ[s - w[i]] --;
                    k++;
                } else {
                    occ[w[i]] ++;
                }
            }
            if (k > k_max) {
                k_max = k;
            }
        }
        cout << k_max << endl;
    }
    return 0;
}
