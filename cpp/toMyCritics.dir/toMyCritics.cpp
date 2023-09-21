/**
 *    author:  evoPrg
 *    created: 21.09.2023 15:29:15
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a <= b && a <= c && b + c >= 10) {
            cout << "YES" << endl;
        }
        else if (b <= a && b <= c && a + c >= 10) {
            cout << "YES" << endl;
        }
        else if (c <= a && c <= b && a + b >= 10) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
