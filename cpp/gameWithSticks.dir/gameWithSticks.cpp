/**
 *    author:  evoPrg
 *    created: 28.09.2023 18:19:46
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool ans = min(n, m)%2 == 0;
    if (ans) {
        cout << "Malvika" << endl;
    } else {
        cout << "Akshat" << endl;
    }
    return 0;
}
