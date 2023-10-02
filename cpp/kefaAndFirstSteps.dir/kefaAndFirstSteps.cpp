/**
 *    author:  evoPrg
 *    created: 28.09.2023 16:59:49
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 1;
    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            count ++;
        } else {
            count = 1;
        }
        if (count > ans) {
            ans = count;
        }
    }
    cout << ans;
    return 0;
}
