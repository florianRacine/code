/**
 *    author:  evoPrg
 *    created: 24.12.2025 15:44:38
 **/
#include <bits/stdc++.h>

using namespace std;

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

long long commonVisited(long long N, long long x, long long y) {
    long long ppcm = lcm(x, y);
    return N / ppcm;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while (tt--) {
        long long n, x, y;
        cin >> n >> x >> y;
        long long count = commonVisited(n, x, y);

        long long left = ((((n / x) - count) * ((n - (n / x) + 1 + count) + n)) / 2);
        long long right = ((((n / y) - count) * (1 + ((n / y) - count))) / 2);

        long long ans =  left - right;
        cout << ans << "\n";
    }
    return 0;
}
