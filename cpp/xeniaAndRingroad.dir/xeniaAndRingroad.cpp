#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n, m; cin >> n >> m;
    int a;
    int x=1;
    ll count=0;

    for (int i=0; i<m; i++) {
        cin >> a;
        if (x<a) {
            count+=a-x;
        } else if (x>a) {
            count+=n-x+a;
        }
        x=a;
    }
    cout << count;
}
