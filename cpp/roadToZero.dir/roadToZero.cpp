/**
 *    author:  evoPrg
 *    created: 08.10.2023 17:33:36
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        long long x, y;
        cin >> x >> y;
        long long a, b;
        cin >> a >> b;
        if (a <= b/2) {
            long long res = (x + y) * a;
            cout << res << endl;
        } else {
            long long res = min(x, y) * b + (max(x, y) - min(x, y)) * a;
            cout << res << endl;
        }
   }
    return 0;
}
