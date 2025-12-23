/**
 *    author:  evoPrg
 *    created: 23.12.2025 17:34:37
 **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        int n = (int) s.size();
        int count_0 = 0, count_1 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                count_0 ++;
            }
            if (s[i] == '1') {
                count_1 ++;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                if (count_1 == 0) {
                    ans = count_0;
                }
                count_1 --;
            }
            if (s[i] == '1') {
                if (count_0 == 0) {
                    ans = count_1;
                }
                count_0 --;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
