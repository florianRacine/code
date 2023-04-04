/**
 *    author:  evoPrg
 *    created: 02.04.2023 14:06:12
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);
        vector <int> countOdd(n);
        int count = 0;
        int odd;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            odd = a[i] % 2;
            if (odd) {
                count ++;
            }
            countOdd[i] = count;
        }
        for (int j = 0; j < q; j++) {
            int l, r;
            long long k;
            cin >> l >> r >> k;
            bool ans = (count - (countOdd[r-1] - countOdd[l-1] + a[l-1]%2) + (k%2)*(r-l+1))%2;
            if (ans) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
