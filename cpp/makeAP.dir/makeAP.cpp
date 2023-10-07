/**
 *    author:  evoPrg
 *    created: 03.10.2023 21:26:34
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int a, b, c;
        cin >> a >> b >> c;
        if ((2* b - c) % a == 0 && (2* b - c) / a > 0) {
            cout << "YES" << endl;
        } else if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0) {
            cout << "YES" << endl;
        } else if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
