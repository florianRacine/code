/**
 *    author:  evoPrg
 *    created: 23.12.2025 17:53:50
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> s(n);
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        if (s[i] == 1) count1++;
        if (s[i] == 2) count2++;
        if (s[i] == 3) count3++;
        if (s[i] == 4) count4++;
    }
    int ans = 0;
    ans += count4;
    ans += count3;
    count1 = max(count1 - count3, 0);
    if(count2 % 2 == 0) {
        ans += count2 / 2;
    } else {
        ans += ((count2) / 2) + 1;
        count1 = max(count1 - 2, 0);
    }
    ans += count1 / 4;
    if (count1 % 4 != 0) ans++;
    cout << ans << "\n";
    return 0;
}
