/**
 *    author:  evoPrg
 *    created: 28.10.2022 20:36:09
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int x, y;
        cin >> x >> y;
        int a = 0, b = 0;
        if (y % x == 0) {
            a = 1;
            b = y/x;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}
