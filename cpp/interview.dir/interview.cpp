/**
 *    author:  evoPrg
 *    created: 02.04.2023 14:55:17
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
        int mA = 0, mB = n - 1, mC = (mA+mB)/2;
        while (mB - mA >= 1) {
            cout << "? " << mC - mA + 1;
            for (int i = mA; i <= mC; i++) {
                cout << " " << i+1;
            }
            cout << endl;
            cout.flush();
            int sum;
            cin >> sum;
            int nSum = 0;
            for (int i = mA; i <= mC; i++) {
                nSum += a[i];
            }
            if (sum > nSum) {
                mB = mC;
            } else {
                mA = mC+1;
            }
            mC = (mA+mB)/2;
        }
        cout << "! " << mB + 1 << endl;
        cout.flush();
    }
    return 0;
}
