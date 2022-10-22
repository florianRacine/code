/**
 *    author:  evoPrg
 *    created: 21.10.2022 12:01:17
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string b; cin >> b;
        string a;
        for (int i = 0; i < (int) b.size(); i+=2) {
            a += b[i];
        }
        a += b[(int) b.size()-1];
        cout << a << endl;
    }
    return 0;
}
