/**
 *    author:  evoPrg
 *    created: 28.09.2023 19:48:23
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        if(n&(n-1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
