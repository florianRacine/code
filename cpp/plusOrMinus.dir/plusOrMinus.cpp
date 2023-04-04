/**
 *    author:  evoPrg
 *    created: 02.04.2023 13:49:16
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c) {
            cout << "+" << endl;
        } else {
            cout << "-" << endl;
        }    
    }
    return 0;
}
