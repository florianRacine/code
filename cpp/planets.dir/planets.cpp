/**
 *    author:  evoPrg
 *    created: 25.10.2022 14:24:31
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        int c; cin >> c;
        map<int, int> a; int ai;
        int tot = 0;
        for (int i = 0; i < n; i++) {
            cin >> ai;
            a[ai]++;
        }
        for (int i = 0; i < (int) a.size(); i++) {
            if (a[i] > c) {
                tot += c;
            } else {
                tot += a[i];
            }
        }
        cout << tot << endl;
    }
    return 0;
}
