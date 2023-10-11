/**
 *    author:  evoPrg
 *    created: 11.10.2023 21:01:48
 **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (k == 0) {
        if (a[0] == 1) {
            cout << -1;
        } else {
            cout << 1;
        }
    } else {
        int x = a[k - 1];
        if (x == a[k]) {
            cout << -1;
        } 
        else {
            cout << x;
        }
        return 0;
    }
}
