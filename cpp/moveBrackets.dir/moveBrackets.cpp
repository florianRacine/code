/**
 *    author:  evoPrg
 *    created: 08.10.2023 14:16:43
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        string s; cin >> s;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                count1++;
            } else {
                if (count1 > 0) {
                    count1--;
                } else {
                    count2++;
                }
            }
        }
        cout << count2 << endl;
    }
    return 0;
}
