/**
 *    author:  evoPrg
 *    created: 04.02.2023 14:59:40
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> s(n);
        int max1 = 1, max2 = 1;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            if (s[i] >= max1) {
                max2 = max1;
                max1 = s[i];
            } else if (s[i] > max2) {
                max2 = s[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (s[i] != max1) {
                cout << s[i] - max1 << " ";
            } else {
                cout << max1 - max2 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
