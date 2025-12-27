/**
 *    author:  evoPrg
 *    created: 27.12.2025 18:38:10
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((a[i] & a[j]) >= (a[i] ^ a[j])) {
                    count ++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}
