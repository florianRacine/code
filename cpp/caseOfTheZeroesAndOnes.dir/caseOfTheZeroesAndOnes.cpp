/**
 *    author:  evoPrg
 *    created: 30.09.2023 22:02:35
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = n;
    int count1 = 0, count0 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count1 ++;
        } else {
            count0 ++;
        }
    }
    ans -= min(count0, count1) * 2;
    cout << ans;
    return 0;
}
