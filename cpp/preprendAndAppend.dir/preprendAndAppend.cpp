/**
 *    author:  evoPrg
 *    created: 03.02.2023 16:19:30
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        string s;
        cin >> n >> s;
        int i = 0;
        while (i < (int) s.size()/2 and s[i] != s[n-1-i]) {
            i++;
        }
        cout << n - 2*i << endl;
    }
    return 0;
}
