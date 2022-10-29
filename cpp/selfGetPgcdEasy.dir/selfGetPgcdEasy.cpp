/**
 *    author:  evoPrg
 *    created: 29.10.2022 20:06:55
**/
#include <bits/stdc++.h>

using namespace std;

int pgcd(int a, int b) {
    int ans = 1;
    for (int i = 1; i <= min(a, b); i++) {
        if (a%i == 0 and b%i == 0) {
            ans = max(ans, i);
        }
    }
    return ans;
}

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int a, b;
        cin >> a >> b;
        cout << pgcd(a, b) << endl;
    }
    return 0;
}
