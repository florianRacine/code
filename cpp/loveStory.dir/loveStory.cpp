/**
 *    author:  evoPrg
 *    created: 21.09.2023 15:20:13
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; 
    cin >> tt;
    while (tt--) {
        string s, sRef;
        sRef = "codeforces";
        int ans = 0;
        cin >> s;
        for (int i = 0; i < (int) s.size(); i++) {
            if (sRef[i] != s[i]) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
