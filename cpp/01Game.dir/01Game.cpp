/**
 *    author:  evoPrg
 *    created: 04.10.2023 18:30:00
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        int count0 = 0, count1 = 0;
        for (int i = 0; i < (int) s.size(); i++) {
            if (s[i] == '0') {
                count0++;
            } else if (s[i] == '1') {
                count1++;
            } else {
                cout << "Error character is neither 0 nor 1" << endl;
            }
        }
        int countMoveAvaible = min(count0, count1);
        if (countMoveAvaible % 2) {
            cout << "DA" << endl;
        } else {
            cout << "NET" << endl;
        }

    }
    return 0;
}
