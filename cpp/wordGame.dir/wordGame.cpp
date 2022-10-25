/**
 *    author:  evoPrg
 *    created: 24.10.2022 18:47:40
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        string w[3][n];
        multiset<string> m;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin >> w[i][j];
                m.insert(w[i][j]);
            }
        }
        for (int i = 0; i < 3; i++) {
            int s = 0;
            for (int j = 0; j < n; j++) {
                if (m.count(w[i][j]) == 1) {
                    s += 3;
                } else if (m.count(w[i][j]) == 2) {
                    s++;
                }
            }
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}
