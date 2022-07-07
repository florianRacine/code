#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n, h; cin >> n >> h;
    int a;
    int w = 0;

    for (int i=0; i<n; i++) {
        cin >> a;
        if (a > h) {
            w += 2;
        } else {
            w++;
        }
    }
    cout << w;
}
