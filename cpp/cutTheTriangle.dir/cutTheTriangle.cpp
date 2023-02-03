/**
 *    author:  evoPrg
 *    created: 02.02.2023 14:02:13
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int x1, x2, x3;
        int y1, y2, y3;

        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;

        if ((x1 == x2 or x1 == x3 or x2 == x3) and (y1 == y2 or y1 == y3 or y2 == y3)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
