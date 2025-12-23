/**
 *    author:  evoPrg
 *    created: 30.09.2023 22:30:30
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    vector<int> a(12);
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int ans = 0, val = 0;
    while (val < k && ans < 12) {
        val += a[ans];
        ans++;
    }
    if (val >= k) {
        cout << ans;
    } else {
        cout << "-1";
    }
    return 0;
}
