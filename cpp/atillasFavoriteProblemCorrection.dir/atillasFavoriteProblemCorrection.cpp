/**
 *    author:  evoPrg
 *    created: 04.02.2023 17:16:22
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int max = 0;
        for (int i = 0; i < n; i++) {
            if (max < (int) s[i] - 'a' + 1) {
                max = (int) s[i] - 'a' + 1;
            }
        }
        cout << max << endl;
    }
    return 0;
}
