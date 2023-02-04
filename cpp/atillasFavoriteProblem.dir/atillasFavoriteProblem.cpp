/**
 *    author:  evoPrg
 *    created: 04.02.2023 14:51:05
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int max = 0;
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (((int)s[i]) - 'a' + 1 > max) {
                max = ((int)s[i]) - 'a' + 1; 
            }
        }
        cout << max << endl;
    }
    return 0;
}
