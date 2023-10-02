/**
 *    author:  evoPrg
 *    created: 22.09.2023 12:52:57
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> d(n);
        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> d[i] >> s[i];
        }

        int min = 1000000000;
        int maxDist;
        for (int i = 0; i < n; i++) {
            maxDist = d[i] + (s[i] + 1) / 2 - 1;
            if (min > maxDist) {
                min = maxDist;
            }
        }
        cout << min << endl;
        
    }
    return 0;
}
