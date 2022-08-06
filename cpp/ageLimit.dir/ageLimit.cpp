/**
 *    author:  evoPrg
 *    created: 06.08.2022 11:43:38
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int x, y, a; cin >> x >> y >> a;
        if (x<=a && a<y) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
