/**
 *    author:  evoPrg
 *    created: 04.02.2023 15:42:52
**/
#include <bits/stdc++.h>

using namespace std;

int countingInversion(vector<int> vec, int n) {
    int count0 = 0, countInversion = 0; 
    for (int i = n - 1; i >= 0; i--) {
        if (vec[i] == 0) {
            count0++;
        } else {
            countInversion += count0;
        }
    }
    return countInversion;
}

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int countInversion = 0, old = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        old = countingInversion(a, n);
        int j = 0;
        while (a[j] == 1 and a[n - 1 - j] == 0 and j < n - 1) {
            j++;
        }
        if (a[j] == 0) {
            a[j] = 1;
            countInversion = countingInversion(a, n);
            a[j] = 0;
            if (old < countInversion) {
                old = countInversion;
            }
        } 
        if (a[n - 1 - j] == 1) {
            a[n - 1 - j] = 0;
            countInversion = countingInversion(a, n);
            a[n - 1 - j] = 1;
            if (old < countInversion) {
                old = countInversion;
            }
        }

        cout << old << endl;
    }
    return 0;
}
