/**
 *    author:  evoPrg
 *    created: 03.02.2023 16:09:53
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        vector<int> pos(2);
        for (int i = 0; i < n; i++) {
            if (s[i] == (char) 'U') {
                pos[1]++;
            } else if (s[i] == (char) 'D') {
                pos[1]--;
            } else if (s[i] == (char) 'L') {
                pos[0]--;
            } else if (s[i] == (char) 'R') {
                pos[0]++;
            }
            if (pos[0] == 1 and pos[1] == 1) {
                cout << "YES" << endl;
                break;
            }
            if (i == n-1) {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
