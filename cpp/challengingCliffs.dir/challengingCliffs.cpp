/**
 *    author:  evoPrg
 *    created: 19.11.2023 16:53:17
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        sort(h.begin(), h.end());

        int m = 1;
        int min_val = h[n - 1] - h[0];
        for (int i = 1; i < n; i++) {
            if (min_val > h[i] - h[i - 1]) {
                min_val = h[i] - h[i - 1];
                m = i;
            }        
        }
        cout << h[m - 1] << " ";
        for (int i = m + 1; i < n; i++) {
            cout << h[i] << " ";
        }
        for (int i = 0; i < m - 1; i++) {
            cout << h[i] << " ";
        }
        cout << h[m] << endl;;
    }
    return 0;
}
