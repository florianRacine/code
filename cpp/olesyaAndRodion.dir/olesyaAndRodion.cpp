/**
 *    author:  evoPrg
 *    created: 29.09.2023 21:50:39
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    string ans;
    if (n == 1 && t == 10) {
        ans = "-1";
    } else {
        ans = to_string(t);
        int dig_t = ans.size();
        for (int i = 0; i < n - dig_t; i++) {
            ans += "0";
        }
    }
    cout << ans;
    return 0;
}
