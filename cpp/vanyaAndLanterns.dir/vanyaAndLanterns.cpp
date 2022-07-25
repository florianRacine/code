#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n, l; cin >> n >> l;
    double a[1000];
    double d = 0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    if (a[0] > d) d = a[0];
if (l-a[n-1] > d) d = l-a[n-1];
    for (int i=1; i<n; i++) {
        if ((a[i]-a[i-1])/2 > d) d = (a[i]-a[i-1])/2;
    }
    cout.precision(10);
    cout << d;
    return 0;
}
