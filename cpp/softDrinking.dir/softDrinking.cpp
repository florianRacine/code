/**
 *    author:  evoPrg
 *    created: 26.10.2022 20:04:12
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ans = min(k*l/nl, min(c*d, p/np))/n;
    cout << ans;
    return 0;
}
