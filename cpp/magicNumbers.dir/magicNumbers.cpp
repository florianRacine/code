/**
 *    author:  evoPrg
 *    created: 03.10.2023 22:44:35
 **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    bool ans = true;
    string s;
    cin >> s;
    int i = 0;
    while (i < (int) s.size()) {
        string sub = "";
        sub += s[i];
        i++;
        while (s[i] != '1' && i < (int) s.size()) {
            sub += s[i];
            i++;
        }
        if (sub != "1" && sub != "14" && sub != "144") {
            i = (int) s.size();
            ans = false;
        }
    }
    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
