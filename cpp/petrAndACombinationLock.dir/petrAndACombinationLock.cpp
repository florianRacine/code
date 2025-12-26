/**
 *    author:  evoPrg
 *    created: 26.12.2025 15:33:03
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    for (int i = 0; i < pow(2, n); i ++) {
        int tmp = 0;
        for (int j = 0; j < n; j++) {
            if (1<<j & i) {
                tmp += a[j];
            } else {
                tmp -= a[j];
            }
        }
        if (tmp % 360 == 0) {
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
    return 0;
}
