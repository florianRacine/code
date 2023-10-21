/**
 *    author:  evoPrg
 *    created: 20.10.2023 16:42:17
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(a.begin(), a.end());
        if ((a[1] % a[0] == 0 && a[2] % a[0] == 0) && (a[1] / a[0] - 1) + (a[2] / a[0] - 1) <= 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
