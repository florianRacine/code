/**
 *    author:  evoPrg
 *    created: 29.09.2023 16:59:06
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int ans = 0;
        while (n > 1) {
            if (n % 6 == 0) {
                n /= 6;
                ans ++;
            } else if ((n*2) % 6 == 0) {
                n /= 3;
                ans += 2;
            } else {
                ans = -1;
                n = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
