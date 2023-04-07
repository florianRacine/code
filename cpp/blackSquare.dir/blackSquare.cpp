/**
 *    author:  evoPrg
 *    created: 05.04.2023 16:34:47
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;
    int occ[4] = {0, 0, 0, 0};
    for (int i = 0; i < (int) s.size(); i++) {
        occ[(int) (s[i] - '1')]++;
    }
    int ans = 0;
    for (int i = 0; i < 4; i++) {
        ans += a[i]*occ[i];
    }
    cout << ans;
    return 0;
}
