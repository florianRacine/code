/**
 *    author:  evoPrg
 *    created: 21.10.2023 16:21:26
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string s, t;
        cin >> s >> t;
        string a = "", b ="";
        int n = (int) t.length(), m = (int) s.length();
        int p = __gcd(n ,m);
        n /= p;
        m /= p;
        for (int i = 0; i < n; i++) {
            a += s;
        }
        for (int i = 0; i < m; i++) {
            b += t;
        }
        if (a != b) {
            cout << -1 << endl;
        } else {
            cout << a << endl;
        }
    }
    return 0;
}
