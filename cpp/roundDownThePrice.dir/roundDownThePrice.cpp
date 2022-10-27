/**
 *    author:  evoPrg
 *    created: 27.10.2022 12:26:58
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        long long m;
        cin >> m;
        int i = 0;
        while(pow(10,i) <= m) {
            i++;
        }
        long long ans = m - pow(10,i-1);
        cout << ans << endl;
    }
    return 0;
}
