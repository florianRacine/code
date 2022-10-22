/**
 *    author:  evoPrg
 *    created: 21.10.2022 12:15:41
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b+c or b == a+c or c == a+b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
