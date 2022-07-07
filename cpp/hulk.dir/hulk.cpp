#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n; cin >> n;
    for (int i=1; i<=n; i++) {
        if (i%2) {
            cout << "I hate";
        } else {
            cout << "I love";
        }
        if (i != n) {
            cout << " that ";
        }
    }
    cout << " it";
    return 0;
}
