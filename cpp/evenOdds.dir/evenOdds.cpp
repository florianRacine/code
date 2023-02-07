/**
 *    author:  evoPrg
 *    created: 07.02.2023 18:51:20
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long k;
    cin >> k;
    if (2*k <= n + n%2) {
        cout << (k * 2) - 1;
    } else {
        cout << (2 * k) - (n + n%2);
    }
    return 0;
}
