/**
 *    author:  evoPrg
 *    created: 29.10.2022 23:52:54
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, A, B;
        cin >> n >> A >> B;
        int ans = 2*3*60 + n*2 - A - B;
        cout << ans << endl;
    }
    return 0;
}
