/**
 *    author:  evoPrg
 *    created: 29.09.2023 13:35:30
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int val = (n/2020) * 2020;
        for (int i = 0; i < n/2020; i++) {
            if (val < n) {
                val++;
            } else {
                break;
            }
        }
        if (val == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
