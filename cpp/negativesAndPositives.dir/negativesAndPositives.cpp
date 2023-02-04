/**
 *    author:  evoPrg
 *    created: 03.02.2023 17:20:32
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        long long sum = 0;
        int countNeg = 0;
        cin >> n;
        vector<long long> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            sum += abs(vec[i]);
            if (vec[i] < 0) {
                countNeg ++;
            }
        }
        if (countNeg % 2 == 0) {
            cout << sum << endl;
        }
        else {
            long long min = abs(vec[0]);
            for (int i = 1; i < n; i++) {
                if (min > abs(vec[i])) {
                    min = abs(vec[i]);
                }
            }
            cout << sum - 2*min << endl;
        }

    }
    return 0;
}
