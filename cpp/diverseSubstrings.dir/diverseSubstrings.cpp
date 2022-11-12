/**
 *    author:  evoPrg
 *    created: 12.11.2022 15:51:07
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        // i, j respectivly beg, end
        int n; cin >> n; // length of the strings s
        string s; cin >> s;
        int ans = n;
        for (int i = 0; i < n; i++) {
            int j = i+1;
            int arr[10]{};
            arr[s[i] - '0']++;
            int countDist = 1;
            bool freqToBig = false;
            while (j < n && freqToBig == false) {
                bool isDiverse = true;
                if (arr[s[j] - '0'] == 0) countDist++;
                arr[s[j] - '0']++;
                for (int k = 0; k < 10; k++) {
                    if (arr[k] > countDist) isDiverse = false;
                    if (arr[s[j] - '0'] > 10) freqToBig = true;
                }
                if (isDiverse) ans++;
                j++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
