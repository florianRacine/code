/**
 *    author:  evoPrg
 *    created: 29.09.2023 14:03:01
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = (m * n - 1) / (m - 1);
    cout << ans;
    return 0;
}
