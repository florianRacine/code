/**
 *    author:  evoPrg
 *    created: 15.10.2023 20:58:21
 **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        bool isPossible = false;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] % x > 0) {
                isPossible = true;
            }
        }

        if (isPossible) {
            if (sum % x > 0) {
                cout << n << endl;
            } else {

                int left = -1, right = n - 1;
                for (int i = 0; i < n; i++) {
                    if (a[i] % x > 0) {
                        if (left == -1) {
                            left = i;
                        }
                        right = i;
                    }
                }
                if (left < n - right) {
                    cout << n - left - 1 << endl;
                } else {
                    cout << right << endl;
                }
            }
        } else {
            cout << -1 << endl;
        }


    }
    return 0;
}
