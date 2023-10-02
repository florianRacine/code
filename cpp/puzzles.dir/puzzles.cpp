/**
 *    author:  evoPrg
 *    created: 28.09.2023 17:42:33
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> f(m);
    for (int i = 0; i < m; i++) {
        cin >> f[i];
    }
    sort(f.begin(), f.end());
    int i = 0;
    int i_min = 0, min = f[i_min + n - 1] - f[i_min];
    while (i + n <= m) {
        if (f[i + n - 1] - f[i] < min) {
            i_min = i;
            min = f[i_min + n - 1] - f[i_min];
        }
        i++;
    }
    cout << min;
    return 0;
}
