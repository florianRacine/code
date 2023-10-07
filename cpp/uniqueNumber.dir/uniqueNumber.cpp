/**
 *    author:  evoPrg
 *    created: 04.10.2023 18:48:55
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int x;
        cin >> x;
        if (x > 45) {
            cout << "-1" << endl;
        } else {
           string s = "";
           int sum_s = 0;
           for (int i = 9; i > 0; i--) {
               if (sum_s + i <= x) {
                   sum_s += i;
                   s += '0' + i;
               }
           }
           reverse(s.begin(), s.end());
           cout << s << endl;
       }
    }
    return 0;
}
