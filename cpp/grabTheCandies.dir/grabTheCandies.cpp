/**
 *    author:  evoPrg
 *    created: 02.04.2023 13:51:50
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int sum1 = 0, sum2 = 0, a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a%2 == 0) {
                sum1 += a;
            } else {
                sum2 += a;
            }
        }
        if (sum1 > sum2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
