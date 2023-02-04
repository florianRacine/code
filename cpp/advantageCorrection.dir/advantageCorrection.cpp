/**
 *    author:  evoPrg
 *    created: 04.02.2023 17:19:01
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        vector<int> s_sorted = s;
        sort(s_sorted.begin(), s_sorted.end());
        for (int i = 0; i < n; i++) {
            if (s[i] != s_sorted[n-1]) {
                cout << s[i] - s_sorted[n-1] << " ";
            } 
            else {
                cout << s_sorted[n-1] - s_sorted[n-2] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
