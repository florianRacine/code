/**
 *    author:  evoPrg
 *    created: 26.09.2023 16:35:28
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        bool ans = false;
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int left = 0; left < n; left++) {
            map<int, int> occ;
            int maxCount = 0;
            for (int right = left; right < n; right++) {
                occ[a[right]]++;
                if (occ[a[right]] > maxCount) {
                    maxCount = occ[a[right]];
                    if (a[right] == k) {
                        ans = true;
                        break;
                    }
                }
            }
            if (ans) {
                break;
            }
        }
        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
