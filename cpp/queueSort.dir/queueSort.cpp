/**
 *    author:  evoPrg
 *    created: 18.11.2023 11:57:50
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int i_min = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < a[i_min]) {
                i_min = i;
            }
        }
        bool possible = true;
        for (int i = i_min + 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                possible = false;
            }
        }
        if (possible) {
            cout << i_min << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
