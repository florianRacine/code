/**
 *    author:  evoPrg
 *    created: 22.10.2023 13:39:13
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        long long prod = 1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            prod *= a[i];
        }
        int ans = 10;
        int occ1 = 0, occ5 = 0, occ6 = 0, occ7 = 0, occ9 = 0, occ10 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] <= k && ans > k - a[i]) {
                ans = k - a[i];
            }
            else if (a[i] > k && a[i] % k != 0 && ans > k - (a[i] % k)) {
                ans = k - (a[i] % k);
            }
            else if (a[i] % k == 0) {
                ans = 0;
                break;
            }
            if (a[i] == 1) occ1 ++;
            if (a[i] == 5) occ5 ++;
            if (a[i] == 7) occ7 ++;
            if (a[i] == 9) occ9 ++;
            if (a[i] == 6) occ6 ++;
            if (a[i] == 10) occ10 ++;
        }
        occ1 += occ5 + occ7 + occ9;
        if (k == 4) {
            if (occ1 >= 2) {
                ans = min(ans, 2);
            }
            if (occ6 >= 2 || occ10 >= 2 || (occ6 == 1 && occ10 == 1)) {
                ans = 0;
            }
            if ((occ6 == 1 || occ10 == 1) && occ1 >= 1) {
                ans = min(ans, 1);
            }
        } 
        if (prod % k == 0) {
            ans = 0;
        }

        cout << ans << endl;
    }
    return 0;
}
