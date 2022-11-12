/**
 *    author:  evoPrg
 *    created: 12.11.2022 22:41:13
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        int arr[n];
        long long sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum1 += arr[i];
            sum2 -= arr[i];
        }
        cout << max(sum1, sum2) << endl;
    }
    return 0;
}
