/**
 *    author:  evoPrg
 *    created: 22.10.2023 13:05:18
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        int ans = 0;
        int old = 0;
        string r = "1234567890";
        for (int i = 0; i < 4; i++) {
            int val;
            for (int j = 0; j < (int) r.size(); j++) {
                if (s[i] == r[j]) {
                    val = j;
                    break;
                }
            }
            ans += abs(old - val) + 1;
            old = val;
        }
        cout << ans << endl;
    }
    return 0;
}
