/**
 *    author:  evoPrg
 *    created: 30.10.2022 09:42:15
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        string s; cin >> s;
        int countQ = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'Q') {
                countQ++;
            } else if (s[i] == 'A' and countQ > 0) {
                countQ--;
            }
        }
        if (countQ > 0) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
