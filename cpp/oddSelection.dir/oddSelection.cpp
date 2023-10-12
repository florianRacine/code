/**
 *    author:  evoPrg
 *    created: 12.10.2023 11:22:33
 **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        bool ans = false;
        int n, x;
        cin >> n >> x;
        vector<int> a(n);

        int countEven = 0, countOdd = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2) {
                countOdd ++;
            } else {
                countEven ++;
            }
        }

        if (countOdd > 0) {
            int solEven = countEven, solOdd = 1;
            countOdd --;

            if (solEven + solOdd == x) {
                ans = true;
            } else if (solEven + solOdd > x) {
                if (solOdd <= x) {
                    ans = true;
                }
            } else {
                while (countOdd >= 2) {
                    countOdd -= 2;
                    solOdd += 2;
                    if (solEven + solOdd == x || (solEven + solOdd > x && solEven > 0)) {
                        ans = true;
                    }
                }
            }
        }
        if (ans) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
