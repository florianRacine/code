/**
 *    author:  evoPrg
 *    created: 03.02.2023 17:29:38
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, c;
        int count = 0;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] += i + 1;
        }
        sort(a.begin(), a.end());
        while (c - a[count] >= 0 and count < n) {
            c -= a[count];
            count ++;
        }
        cout << count << endl;
    }
    return 0;
}
