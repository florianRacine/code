/**
 *    author:  evoPrg
 *    created: 21.09.2023 15:44:57
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n = 8;
        vector<string> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int i_LineWithWord = -1;

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < n; j++) {
                if (s[j][i] != '.') {
                    i_LineWithWord = i;
                    break;
                }
            }
        }
        string ans = "";
        for (int j = 0; j < n; j++) {
            if (s[j][i_LineWithWord] != '.') {
                ans += s[j][i_LineWithWord];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
