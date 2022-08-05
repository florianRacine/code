/**
 *    author:  evoPrg
 *    created: 05.08.2022 11:57:12
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        long long res = 0;
        map<int, int> a;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            x-=i+1;
            res += a[x];
            a[x]++;
        }
        cout << res << endl;
    }
    return 0;
}
