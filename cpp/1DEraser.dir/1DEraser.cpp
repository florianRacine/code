/**
 *    author:  evoPrg
 *    created: 21.09.2023 17:06:28
**/
#include <bits/stdc++.h>

using namespace std;

int minOperationsToRemoveBlackCells(int n, int k, string s) {
    int operations = 0;
    int i = 0;

    while (i < n) {
        if (s[i] == 'B') {
            operations++;
            i += k;
        } else {
            i++;
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int result = minOperationsToRemoveBlackCells(n, k, s);
        cout << result << endl;
    }

    return 0;
}
