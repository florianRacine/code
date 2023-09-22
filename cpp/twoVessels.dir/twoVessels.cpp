/**
 *    author:  evoPrg
 *    created: 22.09.2023 12:33:15
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int a, b, c;
        cin >> a >> b >> c;
        int res;
        if (a > b) {
            res = ((a-b)/(2*c)) + (((a-b)%(2*c)) != 0);
        } else {
            res = ((b-a)/(2*c)) + (((b-a)%(2*c)) != 0);
        }
        cout << res << endl;
    }
    return 0;
}
