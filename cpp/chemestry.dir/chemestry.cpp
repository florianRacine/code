/**
 *    author:  evoPrg
 *    created: 22.10.2023 13:15:31
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> occ;
        for (int i = 0; i < n; i++) {
            occ[s[i]] ++;
        }
        if ((n - k) % 2 != 0) {
            k++;
        }
        for (int i = 0; i < n; i++) {
            if (occ[s[i]] % 2 != 0) {
                occ[s[i]] --;
                k --;
            }
        }
        if (k >= 0 && k % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
