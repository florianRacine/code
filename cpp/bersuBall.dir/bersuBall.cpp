#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int a[100], b[100];

    int n; cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    int m; cin >> m;
    for (int i=0; i<m; i++) cin >> b[i];

    sort(a,a+n);
    sort(b,b+m);

    int i=0, j=0, count=0;
    while (i<n && j<m) {
        if (abs(a[i]-b[j])<=1) i++, j++, count++;
        else if (a[i]+1 < b[j]) i++;
        else j++;
    }

    cout << count;
    return 0;
}
