/**
 *    author:  evoPrg
 *    created: 30.10.2022 10:08:52
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        int arr[n];
        vector<int> l, r;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (n % 2 == 0) {
            int i = 0;
            while (i < n-1) {
                if ((arr[i] == 1 and arr[i+1] == 1) or (arr[i] == -1 and arr[i+1] == -1)) {
                    l.push_back(i+1);
                    r.push_back(i+2);
                    i += 2;
                } else {
                    l.push_back(i+1);
                    r.push_back(i+1);
                    l.push_back(i+2);
                    r.push_back(i+2);
                    i += 2;
                }
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
