/**
 *    author:  evoPrg
 *    created: 28.09.2023 21:25:53
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        long long k = 2;
        while (n % (long long) (pow(2,k) - 1)) {
            k++;
        }
        long long ans = (n / (long long) (pow(2,k) - 1));
        cout << ans << endl;
    }
    return 0;
}
