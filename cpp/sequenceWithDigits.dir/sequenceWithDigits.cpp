/**
 *    author:  evoPrg
 *    created: 20.11.2023 11:10:47
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        long long a; cin >> a;
        long long K; cin >> K;
        for (int i = 1; i < K; i++) {
            long long min_val = 9, max_val = 0;
            long long x = a;
            while (x > 0) {
                long long y = x % 10;
                x /= 10;
                min_val = min(min_val, y);
                max_val = max(max_val, y);
            }
            if (min_val == 0) break;
            a += min_val * max_val;
        }
        cout << a << endl;
    }
    return 0;
}
