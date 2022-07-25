#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n, m, a, b; cin >> n >> m >> a >> b;
    if (m*a>b) {
        int r=(n%m)*a;
        if (r<b) cout << b*(n/m) + r;
        else cout << ((n/m)+1)*b;
    } else cout << n*a;
}
