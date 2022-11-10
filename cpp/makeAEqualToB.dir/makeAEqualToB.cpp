/**
 *    author:  evoPrg
 *    created: 03.11.2022 17:25:13
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        bool a[n], b[n];
        pair<bool, bool> rearrange;
        int sumA = 0, sumB = 0;
        rearrange = make_pair(false, false);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            if (rearrange.first == false and a[i] == 0 and b[i] == 1) {
                rearrange.first = true;
            }
            if (rearrange.second == false and a[i] == 1 and b[i] == 0) {
                rearrange.second = true;
            }
            sumA += a[i];
            sumB += b[i];
        }
        if (rearrange.first == true and rearrange.second == true) {
            cout << abs(sumA - sumB) + 1 << endl;
        } else {
            cout << abs(sumA - sumB) << endl;
        }
    }
    return 0;
}
