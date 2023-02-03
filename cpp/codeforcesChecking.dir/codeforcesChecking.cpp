/**
 *    author:  evoPrg
 *    created: 03.02.2023 16:06:14
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string ref = "codeforces";
        string s;
        cin >> s;
        for (int i = 0; i < (int) ref.size(); i++) {
            if (s[0] == ref[i]) {
                cout << "YES" << endl;
                break;
            }
            else if (i == (int) ref.size() - 1) {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
