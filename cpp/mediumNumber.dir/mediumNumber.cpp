/**
 *    author:  evoPrg
 *    created: 04.02.2023 14:45:31
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int a, b, c;
        cin >> a >> b >> c;
        int mi = min(min(a,b),min(b,c));
        int ma = max(max(a,b),max(b,c));
        if (a != mi and a!= ma) {
            cout << a << endl;
        }
        else if (b != mi and b!= ma) {
            cout << b << endl;
        }
        else {
            cout << c << endl;
        }
    }
    return 0;
}
