/**
 *    author:  evoPrg
 *    created: 21.09.2023 16:56:06
**/
#include <bits/stdc++.h>

using namespace std;

int countPoint(int i, int j) {
    if (i == 0 || j == 0 || i == 9 || j == 9) {
        return 1;
    } else if (i == 1 || j == 1 || i == 8 || j == 8) {
        return 2;
    } else if (i == 2 || j == 2 || i == 7 || j == 7) {
        return 3;
    } else if (i == 3 || j == 3 || i == 6 || j == 6) {
        return 4;
    } else if (i == 4 || j == 4 || i == 5 || j == 5) {
        return 5;
    } else {
        return 0;
    }
}

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int res = 0;
        int n = 10, m = 10;
        vector<string> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 'X') {
                    res += countPoint(i, j);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
