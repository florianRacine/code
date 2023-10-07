/**
 *    author:  evoPrg
 *    created: 07.10.2023 23:47:01
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
