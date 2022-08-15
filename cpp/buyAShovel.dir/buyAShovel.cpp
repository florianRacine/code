/**
 *    author:  evoPrg
 *    created: 15.08.2022 03:28:08
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, r; cin >> k >> r;
    int count = 1, price = k;
    while (!(price%10-r==0 || price%10==0)) {
        count++;
        price += k;
    }
    cout << count;
    return 0;
}
