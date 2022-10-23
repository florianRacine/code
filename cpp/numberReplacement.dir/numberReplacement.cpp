/**
 *    author:  evoPrg
 *    created: 22.10.2022 11:07:11
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        bool ans = true;
        int n; cin >> n;
        vector<int> a(n);
        string s;
        set<int> occ;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (occ.count(a[i]) == 0) {
                occ.insert(a[i]);
                for (int j = i; j < n; j++) {
                    if (a[j] == a[i] and s[j] != s[i]) {
                        ans = false;
                    }
                }
            }
        }
        if (ans == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
