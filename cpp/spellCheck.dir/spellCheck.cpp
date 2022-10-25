/**
 *    author:  evoPrg
 *    created: 24.10.2022 18:33:49
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        string s; cin >> s;
        multiset<char> letters;
        for (int i = 0; i < n; i++) {
            letters.insert(s[i]);
        }
        if ((int) letters.size() == 5 and letters.count((char) 'T') == 1 and letters.count((char) 'i') == 1 and letters.count((char) 'm') == 1 and letters.count((char) 'u') == 1 and letters.count((char) 'r') == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
