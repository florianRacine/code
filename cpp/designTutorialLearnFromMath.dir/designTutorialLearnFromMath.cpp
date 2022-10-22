/**
 *    author:  evoPrg
 *    created: 21.10.2022 11:39:29
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int x;
    int y;
    if (n%2 == 0) {
        x = 8;
        y = n-8;
    } else {
        x = 9;
        y = n-9;
    }
    cout << x << " " << y;
    return 0;
}
