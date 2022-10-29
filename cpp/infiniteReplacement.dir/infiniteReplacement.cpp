/**
 *    author:  evoPrg
 *    created: 28.10.2022 22:06:01
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int q; cin >> q;
    while (q--) {
        string s, t;
        cin >> s >> t;
        int countA = 0, countOther = 0;
        for (int i = 0; i < (int) t.size(); i++) {
            if(t[i] == (char) 'a') {
                countA++;
            } else {
                countOther++;
            }
        }
        long long ans;
        if (countA == 0 and countOther > 0) {
            ans = pow(2, (int) s.size());
        } else if (countA <= 1 and countOther == 0) {
            ans = 1;
        } else if (countA > 1 or countA == 1 and countOther > 0) {
            ans = -1;
        }
        cout << ans << endl;
    }
    return 0;
}
