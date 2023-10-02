/**
 *    author:  evoPrg
 *    created: 28.09.2023 16:15:04
 **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool ans = false;
    int count = 1;
    for (int i = 1; i < (int) s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count ++;
            if (count >= 7) {
                ans = true;
                break;
            }

        } else {
            count = 1;
        }
    }
    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
