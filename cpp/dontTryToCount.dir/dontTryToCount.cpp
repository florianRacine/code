/**
 *    author:  evoPrg
 *    created: 20.10.2023 15:43:10
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int ans = 0;
        bool isAnsFound = false;
        while ((int) x.size() <= 50) {
            if (x.find(s) != string::npos) {
                isAnsFound = true;
                break;
            }
            x = x + x;
            ans ++;
        }
        if (isAnsFound) {
            cout << ans << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
