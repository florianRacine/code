/**
 *    author:  evoPrg
 *    created: 06.02.2023 12:42:16
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0; 
    int n = (int) s.size();
    while (i < n) {
        if (s[i] == '.') {
            cout << 0;
            i++;
        } else if (s[i+1] == '.') {
            cout << 1;
            i+=2;
        } else {
            cout << 2;
            i+=2;
        }
    }
    return 0;
}
