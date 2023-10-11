/**
 *    author:  evoPrg
 *    created: 11.10.2023 18:25:36
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    int n = (int) (log(x)) / (log(2)) + 1;
    int res = 0;
    for (int i = n; i >= 0; i--) {
        if (x >= pow(2, i)) {
            res ++;
            x -= pow(2, i);
        }
    }
    cout << res;
    return 0;
}
