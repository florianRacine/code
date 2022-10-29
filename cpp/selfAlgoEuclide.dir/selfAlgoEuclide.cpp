/**
 *    author:  evoPrg
 *    created: 29.10.2022 20:01:09
**/

//Rq : Cette algorithme a été inventé en -300 avant jc
#include <bits/stdc++.h>

using namespace std;

int pgcdEuclide(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return pgcdEuclide(b, a%b);
    }
}

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int a, b;
        cin >> a >> b;
        cout << pgcdEuclide(a, b) << endl;
    }
    return 0;
}
