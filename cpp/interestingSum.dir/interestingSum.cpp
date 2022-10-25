/**
 *    author:  evoPrg
 *    created: 25.10.2022 14:48:06
**/
#include <bits/stdc++.h>

using namespace std;
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        cout << a[n-1] + a[n-2] - a[0] - a[1] << endl;
     }
    return 0;
}
