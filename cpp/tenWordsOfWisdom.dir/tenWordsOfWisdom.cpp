/**
 *    author:  evoPrg
 *    created: 21.09.2023 15:36:44
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int x = -1, xMax = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }
        for (int i = 0; i < n; i++) {
            if (a[i] <= 10 && b[i] > xMax) {
                xMax = b[i];
                x = i;
            }
        }
        cout << x + 1 << endl;
    }
    return 0;
}
