/**
 *    author:  evoPrg
 *    created: 06.02.2023 18:01:09
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = (int) s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == 'H' or s[i] == 'Q' or s[i] == '9') {
            cout << "YES";
           return 0;
        }
    }
    cout << "NO";
    return 0;
}
