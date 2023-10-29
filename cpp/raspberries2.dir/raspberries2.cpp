/**
 *    author:  evoPrg
 *    created: 23.10.2023 21:18:06
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = n * 10;
        int countOdd = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % k == 0) {
                ans = 0;
                break;
            }
            else if (a[i] < k) {
                ans = min(ans, k - a[i]);
            }
            else {
                ans = min(ans, k - a[i] % k);
            }
            if (a[i] % 2 == 0) {
                countOdd++;
            }
        }
        if (k == 2 || k == 3 || k == 5) {
            cout << ans << endl;
        } else {
            ans = min(ans, max(0, 2 - countOdd));
            cout << ans << endl;
        }
    }
    return 0;
}
