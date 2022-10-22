/**
 *    author:  evoPrg
 *    created: 21.10.2022 12:18:25
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        set<int> s;
        int a;
        bool ans = true;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (s.count(a)==1) {
                ans = false;
            } else {
                s.insert(a);
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
