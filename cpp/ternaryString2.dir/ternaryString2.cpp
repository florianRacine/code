/**
 *    author:  evoPrg
 *    created: 11.10.2023 21:20:54
 **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string s; cin >> s;
        int n = (int) s.size();
        int left = 0, right = 0;
        unordered_map<char, int> occ; // Occ of 1, 2, 3 in subset from left to right
        int ans = n + 1;

        while (right < n) {
            while (((occ['1'] == 0 || occ['2'] == 0) || occ['3'] == 0) && right < n) {
                occ[s[right]] ++;
                right ++;
            }
            while (left < right) {
                if ((occ['1'] != 0 && occ['2'] != 0) && occ['3'] != 0) {
                    ans = min(ans, right - left);
                }
                occ[s[left]] --;
                left ++;
            }
        }
        if (ans != n + 1) {
            cout << ans << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
