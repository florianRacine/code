/**
 *    author:  evoPrg
 *    created: 18.10.2023 21:07:31
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<long long> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<long long> cum(n + 1);
    for (int i = 1; i < n + 1; i++) {
        cum[i] = cum[i - 1] + a[i - 1];
    }

    long long ans1, ans2;

    for (int i = 0; i < m; i++) {
        auto it = upper_bound(cum.begin(), cum.end(), b[i] - 1);

        ans1 = it - cum.begin();
        ans2 = b[i] - cum[ans1 - 1];

        cout << ans1 << " " << ans2 << endl;

    }
    return 0;
}
