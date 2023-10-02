/**
 *    author:  evoPrg
 *    created: 29.09.2023 17:42:14
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, a, b;
        cin >> n >> a >> b;

        string ans = "";
        int count = 1;
        for (int i = 0; i < a; i++) {
            ans += 'a' + count - 1;
            if (count < b) {
                count ++;
            }
        }
        int index = 0;
        while ((int) ans.size() < n) {
            ans += ans[index];
            index++;
        }
        cout << ans << endl;
    }
    return 0;
}
