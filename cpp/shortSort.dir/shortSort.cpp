/**
 *    author:  evoPrg
 *    created: 21.09.2023 16:35:19
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        if (s == "bca" || s == "cab") {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
