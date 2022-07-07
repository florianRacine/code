#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    ll n; cin >> n;
    ll f;
    f = (n+1)/2;
    if (n%2) f *= -1;
    cout << f;
}
