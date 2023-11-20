/**
 *    author:  evoPrg
 *    created: 19.11.2023 17:56:50
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
        sort(a.begin(), a.end());
        vector<int> ans = {a[n / 2]};
        for (int i = 1; i <= n / 2; i++) {
            if ((n / 2) - i >= 0) ans.push_back(a[(n / 2) - i]);
            if ((n / 2) + i < n) ans.push_back(a[(n / 2) + i]);
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
