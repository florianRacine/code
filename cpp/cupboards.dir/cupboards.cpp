/**
 *    author:  evoPrg
 *    created: 06.02.2023 13:45:25
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sumLeft = 0, sumRight = 0;
    int l, r;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        sumLeft += l;
        sumRight += r;
    }
    cout << min(sumLeft, n-sumLeft) + min(sumRight, n-sumRight);
    return 0;
}
