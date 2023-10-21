/**
 *    author:  evoPrg
 *    created: 17.10.2023 22:54:30
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    int q;
    cin >> q;
    vector<int>m(q);
    for (int i = 0; i < q; i++) {
        cin >> m[i];
    }
    sort(x.begin(), x.end());

    for (int i = 0; i < q; i++) {
        // Binary search first element in x <= m[i]
        int left = 0, right = n-1, mid = (left + right)/2;

        while (left < right) {
            if (x[mid] >= m[i]) {
                right = mid;
            } else {
                left = mid + 1;
            }
            mid = (left + right)/2;
        }
        int ans = left;
        if (x[0] <= m[i]) {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
