/**
 *    author:  evoPrg
 *    created: 21.10.2023 15:03:07
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s = "4";

        for (int i = 1; i < n; i++) {
            s += "3";
        }

        if (n > 1) {
            cout << s << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
