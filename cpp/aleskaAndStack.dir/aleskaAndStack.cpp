/**
 *    author:  evoPrg
 *    created: 26.09.2023 17:00:18
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        a[0] = 1;

        for (int i = 1; i < n; i++) {
            a[i] = a[i - 1] + 2;
        }

        // Output the array
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
