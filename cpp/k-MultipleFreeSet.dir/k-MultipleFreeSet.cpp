/**
 *    author:  evoPrg
 *    created: 06.04.2023 10:57:43
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
    vector<bool> c(n); // True -> we dont take
    int countChange = 0;
    do {
        countChange = 0;
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            if (not c[i]) {
                for (int j = i + 1; j < n; j++) {
                    if (a[i]*k == a[j]) {
                        b[i]++;
                        countChange ++;
                    }
                }
            }
        }
        if (countChange > 0) {
            int iMax = 0;
            for (int i = 0; i < n; i++) {
                if (b[iMax] < b[i]) {
                    iMax = i;
                }
            }
            c[iMax] = true;
            cout << "iMax = " << iMax << endl;
            for (int i = 0; i < n; i ++) {
                cout << " b" << i << " = " << b[i];
            }
            cout << endl;
        }
    } while (countChange > 0);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (not c[i]) {
            ans ++;
        }
    }
    cout << ans;
    return 0;
}
