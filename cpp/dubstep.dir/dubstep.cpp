/**
 *    author:  evoPrg
 *    created: 28.09.2023 17:04:57
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = (int) s.size();
    string ans = "";
    int i = 0;
    while (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
        i += 3;
    }
    while (i < n - 2) {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            if (ans[(int) ans.size() - 1] != ' ') {
                ans += ' ';
            }
            i += 3;
        } else {
            ans += s[i];
            i ++;
        }
    }
    if (i < n - 1) {
        ans += s[i];
        ans += s[i + 1];
    } else if (i < n) {
        ans += s[i];
    }
    cout << ans;
    return 0;
}
