/**
 *    author:  evoPrg
 *    created: 30.10.2022 10:46:52
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        int arr[n];
        vector<int> l, r;
        int count0 = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 0) {
                count0++;
            }
        }
        if ((n-count0) % 2 == 0) {
            int i = 0;
            while (i < n-1) {

            }  
            cout << (int) l.size() << endl;
            for (int j = 0; j < (int) l.size(); j++) {
                cout << l[j] << " " << r[j] << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
