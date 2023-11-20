/**
 *    author:  evoPrg
 *    created: 17.11.2023 16:26:15
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map <int, int> occ;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += occ[a[i]];
            if (a[i] == 1) ans += occ[2];
            if (a[i] == 2) ans += occ[1];
            occ[a[i]]++;
        }
        cout << ans << endl;
    }
    return 0;
}
