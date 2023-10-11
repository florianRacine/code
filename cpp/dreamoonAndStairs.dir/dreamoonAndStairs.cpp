/**
 *    author:  evoPrg
 *    created: 08.10.2023 15:50:53
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n >= m) {
        int move = n / 2 + n % 2;
        while (move % m != 0) {
            move ++;
        }
        cout << move;
    } else {
        cout << "-1";
    }
    return 0;
}
