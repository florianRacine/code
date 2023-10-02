/**
 *    author:  evoPrg
 *    created: 23.09.2023 12:19:21
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int l, r;
        cin >> l >> r;
        int a = l/2 + (l%2);
        int b = a;
        if (a + b <= r && a != 1) {
            cout << a << " " << b << endl;
        } else {
            a =  r/2;
            b = a;
            if (a + b >= l && a != 1) {
                cout << a << " " << b << endl;
            } else {
                cout << "-1" << endl;
            }

        }
    }
    return 0;
}
