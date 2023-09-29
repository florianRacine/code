/**
 *    author:  evoPrg
 *    created: 29.09.2023 17:28:42
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string row = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string move; cin >> move;
    string msg; cin >> msg;

    string ans = "";
    for (int i = 0; i < (int) msg.size(); i++) {
        for (int j = 0; j < (int) row.size(); j++) {
            if (row[j] == msg[i]) {
                if (move[0] == 'R') {
                    ans += row[j - 1];
                } else if (move[0] == 'L') {
                    ans += row[j + 1];
                } else {
                    cout << "Move unknown" << endl;
                }
            }
        }
    }
    cout << ans;
    return 0;
}
