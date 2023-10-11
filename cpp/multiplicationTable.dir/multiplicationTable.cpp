/**
 *    author:  evoPrg
 *    created: 08.10.2023 17:47:44
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (x / i <= n && x % i == 0) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
