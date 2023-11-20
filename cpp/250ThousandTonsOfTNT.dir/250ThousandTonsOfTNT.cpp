/**
 *    author:  evoPrg
 *    created: 17.11.2023 15:39:06
 **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<long long> sum_a(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum_a[i + 1] = a[i] + sum_a[i];
        }
        long long max_tot = 0;
        for (int k = 1; k <= n; k++) {
            if (n % k == 0) {
                long long max = 0, min = sum_a[n];
                for (int j = k; j <= n; j += k) {
                    long long sum = sum_a[j] - sum_a[j - k];
                    if (sum > max) max = sum;
                    if (sum < min) min = sum;
                }
                if (max_tot < max - min) {
                    max_tot = max - min;
                }
            }
        }
        cout << max_tot << endl;
    }
    return 0;
}
