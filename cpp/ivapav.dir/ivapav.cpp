/**
 *    author:  evoPrg
 *    created: 26.09.2023 18:29:20
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int q;
        cin >> q;

        for (int i = 0; i < q; i++) {
            int l, k;
            cin >> l >> k;
            l--;  // Adjust for 0-based indexing

            int r = l;
            int result = -1;
            int current_and = a[l];

            while (r < n && current_and >= k) {
                result = r;
                r++;
                current_and &= a[r];
            }

            cout << result + 1 << endl;  // Adjust for 1-based indexing and output result
        }
    }
    return 0;
}
