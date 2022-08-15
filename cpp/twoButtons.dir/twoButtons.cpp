/**
 *    author:  evoPrg
 *    created: 07.08.2022 06:34:59
**/
#include <bits/stdc++.h>

using namespace std;

int solve(int n, int m, int count) {
    if (n == m) {
        return count;
    } else if (n*2<=m ||(n<m && n*4>=3*m) || (n-1)*2<m) {
        return solve(n*2, m, count+1);
 }
    return solve(n-1, m, count+1);
}

int main() {
    int n; cin >> n;
    int m; cin >> m;
    cout << solve(n, m, 0);
    return 0;
}
