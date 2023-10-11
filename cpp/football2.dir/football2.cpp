/**
 *    author:  evoPrg
 *    created: 11.10.2023 19:40:32
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s1 = "", s2 = "";
    cin >> s1;
    int count_s1 = 1, count_s2 = 0;
    for (int i = 0; i < n - 1; i++) {
        string s;
        cin >> s;
        if (s == s1) {
            count_s1 ++;
        } else {
            s2 = s;
            count_s2 ++;
        }
    }
    if (count_s1 < count_s2) {
        cout << s2;
    } else {
        cout << s1;
    }
    return 0;
}
