/**
 *    author:  evoPrg
 *    created: 21.09.2023 16:44:53
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
        int min = *min_element(a.begin(), a.end());
        long long res = 1;
        for (int i = 0; i < n; i++) {
            if (min == a[i]) {
                res *= (a[i] + 1);
                min = - 1;
            } else {
                res *= (a[i]);
            }
        }
        cout << res << endl;
    }
    return 0;
}
