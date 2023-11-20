/**
 *    author:  evoPrg
 *    created: 17.11.2023 16:11:13
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int maxSum = a[0];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = max(sum, 0);
            if (i > 0 && ((abs(a[i]) % 2) == (abs(a[i - 1]) % 2)))  {
                sum = 0;
            }
            sum += a[i];
            maxSum = max(maxSum, sum);
        }
        cout << maxSum << endl;
    }
    return 0;
}
