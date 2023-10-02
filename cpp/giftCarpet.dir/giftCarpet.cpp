/**
 *    author:  evoPrg
 *    created: 26.09.2023 01:55:25
 **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<string> carpet(n);
        int k = 0;
        string name = "vika";
        for (int i = 0; i < n; i++) {
            cin >> carpet[i];
        }
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                if (name[k] == carpet[i][j]) {
                    k++;
                    break;
                }
            }
            if (k >= (int) name.size()) {
                break;
            }
        }
        if (k >= (int) name.size()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
