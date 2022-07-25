#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

 
int32_t main() {
    int n; cin >> n;
    int x, y, z;
    int sX=0, sY=0, sZ=0;
    for (int i=0; i<n; i++) {
        cin >> x >> y >> z;
        sX += x;
        sY += y;
        sZ += z;
    }
    if (sX==0 && sY==0 && sZ==0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
