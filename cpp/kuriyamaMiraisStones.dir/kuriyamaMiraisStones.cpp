/**
 *    author:  evoPrg
 *    created: 06.08.2022 22:13:06
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<long long> u = v;
    sort(u.begin(), u.end());
    for (int i = 1; i < n; i++) {
        v[i] += v[i-1];
        u[i] += u[i-1];
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int type, l, r; cin >> type >> l >> r;
        if (type == 1 && l > 1) {
            cout << v[r-1] - v[l-2] << endl;
        } else if (type == 1 && l == 1) {
            cout << v[r-1] << endl;
        } else if (type == 2 && l > 1) {
            cout << u[r-1] - u[l-2] << endl;
        } else {
            cout << u[r-1] << endl;
        }
    }
    return 0;
}
