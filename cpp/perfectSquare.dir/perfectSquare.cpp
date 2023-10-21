/**
 *    author:  evoPrg
 *    created: 20.10.2023 17:47:16
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<string> m(n);
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }

        int ans = 0;
        for (int k = 0; k < n; k++) {
            bool isNoChange = true;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (m[i][j] != m[n - 1 - j][i]) {
                        ans += abs(m[i][j] - m[n - 1 - j][i]);
                        if (m[i][j] < m[n - 1 - j][i]) {
                            m[i][j] = m[n - 1 - j][i];
                        } else {
                            m[n - 1 - j][i] = m[i][j];
                        }
                        isNoChange = false;
                    }
                }
            }
            if (isNoChange) {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
