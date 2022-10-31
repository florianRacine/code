/**
 *    author:  evoPrg
 *    created: 30.10.2022 09:49:53
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        deque<int> ans;
        for (int i = n/2; i >=1; i--) {
            ans.push_back(i);
            ans.push_back(i+n/2);
        }
        if (n % 2 != 0) {
            ans.push_front(n);
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
