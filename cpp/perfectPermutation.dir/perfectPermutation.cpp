#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {

    int t; cin >> t;
    for (int j=0; j<t; ++j) {

        int n; cin >> n;

        if (n>1) cout << n << " ";
        else cout << n << endl;

        for (int i=1; i<n-1; ++i) cout << i << " ";
        if (n>1) cout << n-1 << endl;
    }
}
