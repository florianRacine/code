/**
 *    author:  evoPrg
 *    created: 26.09.2023 11:17:30
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
        if ((int) a[0] == n) {

            vector<int> b;
            for (int i = n - 1; i >= 0; i--) {
                while ((int) b.size() < a[i]) {
                    b.push_back(i + 1);
                }
            }            
            bool ans = true;
            for (int i = 0; i < n; i++) {
                if (a[i] != b[i]) {
                    ans = false;
                }
            }
            if (ans) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
