/**
 *    author:  evoPrg
 *    created: 04.02.2023 15:11:12
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; 
        cin >> n;
        vector<long long> a(n);
        int count = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << "YES" << endl;
        } else {
            bool cond = true;
            for (int i = 0; i < n-1; i++) {
                if (a[i] != a[i+1]) {
                    cond = false;
                    break;
                }
            }
            int j = 1;
            while (a[0] == a[j] and j < n-1) {
                j++;
            }
            if (a[0] < a[j]) {
                count ++;
            }

            j = n-2;
            while(a[n-1] == a[j] and j > 0) {
                j--;
            }
            if (a[n-1] < a[j]) {
                count ++;
            }

            bool cond3 = false;
            bool cond4 = false;
            for (int i = 1; i < n-1; i++) {
                if (a[i] < a[i-1]) {
                    cond3 = true;
                }
                if (a[i] < a[i+1]) {
                    cond4 = true;
                }
                if (a[i] > a[i-1] or a[i] > a[i+1]) {
                    cond3 = false;
                    cond4 = false;
                }
                if (cond3 and cond4) {
                    count++;
                }
            }
            if (count == 1 or cond) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }

        }

    }
    return 0;
}
