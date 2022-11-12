/**
 *    author:  evoPrg
 *    created: 12.11.2022 23:01:16
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    // BAN -> BNA
    // BANBAN -> BNNBAA
    // BANBANBAN -> BNNBANBAA ->BNNBNABAA
    // BANBANBANBAN -> BNNBANBANBAA -> BNNBNNBAABAA
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        if (n % 2 == 0) {
            cout << n/2 << endl;
            for (int i = 2; i < (3*n)/2; i += 3) {
                cout << i << " " << ((3*n)+2)-i << endl;
            }
        } else {
            cout << (n+1)/2 << endl;
            for (int i = 2; i < (3*n)/2; i += 3) {
                cout << i << " " << ((3*n)+2)-i << endl;
            }
            cout << ((3*n+1)/2) << " " << ((3*n+1)/2)+1 << endl;
        }
    }
    return 0;
}
