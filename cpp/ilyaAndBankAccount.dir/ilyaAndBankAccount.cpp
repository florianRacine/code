/**
 *    author:  evoPrg
 *    created: 28.09.2023 19:32:02
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    long int n;
    cin >> n;
    long int ans;
    if (n >= 0) {
        ans = n;
    } else {
        ans = max((n/10),((n%10) + ((n/100) * 10)));
    }
    cout << ans;
    return 0;
}
