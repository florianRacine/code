/**
 *    author:  evoPrg
 *    created: 22.10.2022 12:13:52
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        char c; cin >> c;
        string s; cin >> s;
        int countC = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                countC++;
            }
        }
        vector<int> lengthPaths(countC);
        int firstC = 0;
        while (s[firstC] != c) {
            firstC++;
        }
        int lastC = n-1;
        while (s[lastC] != c) {
            lastC--;
        }
        int l = 0;
        int nL = 0;
        for (int i = firstC; i < lastC; i++) {
            if (s[i] == (char) 'g') {
                lengthPaths[nL] = l;
                nL++;
                l = 0;
            } else {
                l++;
            }
        }
        for (int i = lastC; i < n; i++) {
            if (s[i] == (char) 'g') {
                lengthPaths[countC-1] = l;
            } else {
                l++;
            }
        }
        if (lengthPaths[n-1] == 0) {
            for (int i = 0; i < firstC; i++) {
                if (s[i] == (char) 'g') {
                    lengthPaths[countC-1] = l;
                } else {
                    l++;
                }
            }
        }
        sort(lengthPaths.begin(), lengthPaths.end());
        cout << lengthPaths[countC-1] << endl;
    }
    return 0;
}
