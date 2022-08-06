/**
 *    author:  evoPrg
 *    created: 06.08.2022 14:11:13
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int t; cin >> t;
    vector<int> a(n-1);
    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
    }
    int pos = 0;
    while (pos<n-1) {
        pos += a[pos];
        if (pos+1 == t) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
