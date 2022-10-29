/**
 *    author:  evoPrg
 *    created: 29.10.2022 23:43:21
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < (int) s.size(); i++) {
            ans += ((int) s[i]) - '0';
        }
        cout << ans << endl;
    }
    return 0;
}
