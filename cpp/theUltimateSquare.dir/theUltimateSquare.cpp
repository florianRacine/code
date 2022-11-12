/**
 *    author:  evoPrg
 *    created: 12.11.2022 15:35:20
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        int ans;
        if (n % 2 != 0) {
            n++;
        }
        ans = n/2;
        cout << ans << endl;
    }
    return 0;
}
