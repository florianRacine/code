/**
 *    author:  evoPrg
 *    created: 02.10.2023 23:15:36
**/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int x, n, m;
        cin >> x >> n >> m;
        int h = x;
        for (int i = 0; i < n; i++) {
            if (h < 20) {
                break;
            }
            h = (h / 2) + 10;
        }
        h = h - (m * 10);
        if (h <= 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
