/**
 *    author:  evoPrg
 *    created: 25.10.2022 19:16:11
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        int s[n], f[n], d[n];
        int curTime = 0;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> f[i];
        }
        cout << f[0] - s[0]
        for (int i = 1; i < n; i++) {
            curTime = max(f[i-1], s[i]);
            d[i] = f[i] - curTime;
            cout << d[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
