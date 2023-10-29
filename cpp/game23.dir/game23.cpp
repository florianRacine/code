/**
 *    author:  evoPrg
 *    created: 21.10.2023 15:07:38
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    if (m % n == 0) {
        m /= n;
        while (m % 2 == 0) {
            ans ++;
            m /= 2;
        }
        while (m % 3 == 0) {
            ans ++;
            m /= 3;
        }
    }
    if (m == 1) {
        cout << ans;
    } else {
        cout << -1;
    }
    return 0;
}
