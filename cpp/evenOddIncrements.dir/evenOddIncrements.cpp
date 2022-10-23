/**
 *    author:  evoPrg
 *    created: 22.10.2022 11:22:37
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        int q; cin >> q;
        vector<long long> a(n);
        vector<int> type(q);
        vector<int> x(q);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> type[i] >> x[i];
        }
        long long sum = 0;
        int countOdd = 0; // Impaire
        int countEven = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (a[i] % 2 == 0) {
                countEven++;
            } else {
                countOdd++;
            }
        }
        for (int i = 0; i < q; i++) {
            if (type[i] == 0) {
                sum += x[i] * countEven;
            } else {
                sum += x[i] * countOdd;
            }
            cout << sum << endl;
            if (x[i] % 2 != 0 and type[i] == 0) {
                countOdd += countEven;
                countEven = 0;
            } else if (x[i] % 2 != 0 and type[i] == 1) {
                countEven += countOdd;
                countOdd = 0;
            }
        }
    }
    return 0;
}
