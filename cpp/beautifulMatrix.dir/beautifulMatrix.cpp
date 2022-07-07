#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n = 5;
    int m = 5;
    int bit;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cin >> bit;
            if (bit == 1) {
                cout << abs(3 - j) + abs(3 - i);
                return 0;
            }
        }
    }
}
