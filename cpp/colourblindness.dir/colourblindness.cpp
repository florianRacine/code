/**
 *    author:  evoPrg
 *    created: 24.10.2022 18:41:46
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        string row1; cin >> row1;
        string row2; cin >> row2;
        bool ans = true;
        for (int i = 0; i < n; i++) {
            if (row1[i] != row2[i] and (row1[i] == (char) 'R' or row2[i] == (char) 'R')) {
                ans = false;
            }
        }
        if (ans == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
