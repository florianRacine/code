/**
 *    author:  evoPrg
 *    created: 11.10.2023 20:46:22
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string a = "", b = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                a += "0";
                b += "0";
            } else if (s[i] == '1') {
                if (a < b) {
                    a += "1";
                    b += "0";
                } else {
                    a += "0";
                    b += "1";
                }
            } else {
                if (a == b) {
                    a += "1";
                    b += "1";
                } else if (a < b) {
                    a += "2";
                    b += "0";
                }
                else {
                    a += "0";
                    b += "2";
                }
            }
        }
        cout << a << endl;
        cout << b << endl;
    }
    return 0;
}
