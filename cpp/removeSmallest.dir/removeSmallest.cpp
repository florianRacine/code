/**
 *    author:  evoPrg
 *    created: 26.08.2022 16:46:05
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool res = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n-1; i++) {
            if (!(a[i+1]-a[i] <= 1)) {
                res = false;
            }
        }
        if (res) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        }
    return 0;
}
