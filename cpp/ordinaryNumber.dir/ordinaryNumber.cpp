/**
 *    author:  evoPrg
 *    created: 05.02.2023 23:01:11
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int ans = 9 * (int) (log10(n));
        cout << ans << endl;
    }
    return 0;
}
