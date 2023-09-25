/**
 *    author:  evoPrg
 *    created: 25.09.2023 14:23:53
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string a, b;
        cin >> a >> b;
        bool ans = false;
        for (int i = 0; i < (int) a.size()-1; i ++) {
            if (a[i] == '0' && b[i] == '0' && a[i+1] == '1' && b[i+1] == '1') {
                ans = true;
                break;
            }
        }
        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
