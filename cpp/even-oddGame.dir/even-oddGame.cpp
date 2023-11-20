/**
 *    author:  evoPrg
 *    created: 20.11.2023 10:56:07
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        long long scoreAlice = 0, scoreBob = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { // Alice turn
                if (a[i] % 2 == 0) {
                    scoreAlice += a[i];
                }
            } else { // Bob turn
                if (a[i] % 2 != 0) {
                    scoreBob += a[i];
                }
            }
        }
        if (scoreAlice > scoreBob) {
            cout << "Alice" << endl;
        } else if (scoreAlice == scoreBob) {
            cout << "Tie" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
    return 0;
}
