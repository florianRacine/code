/**
 *    author:  evoPrg
 *    created: 02.04.2023 15:48:53
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<long long> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        sort(c.begin(), c.end());
        vector<long long> sum(n);
        long long s = 0;
        for (int i = 0; i < n; i++) {
            s += c[i];
            sum[i] = s;
        }
        bool ans = true;
        if (c[0] > 1) {
            ans = false;
        }
        for (int i = 1; i < n; i++) {
            if (c[i] > sum[i-1]) {
                ans = false;
            }
        }
        if (ans) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
