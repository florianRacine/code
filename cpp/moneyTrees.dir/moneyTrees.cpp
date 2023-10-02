/**
 *    author:  evoPrg
 *    created: 21.09.2023 17:59:14
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> h(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        int left = 0;
        int max_length = 0;
        int current_fruits = 0;
        bool conditions_met = true;

        for (int right = 0; right < n; right++) {
            current_fruits += a[right];

            while (current_fruits > k) {
                current_fruits -= a[left];
                left++;
            }

            if (right > 0 && h[right - 1] % h[right] != 0) {
                conditions_met = false;
            }

            if (!conditions_met) {
                while (left <= right && !conditions_met) {
                    current_fruits -= a[left];
                    left++;

                    if (left <= right && h[left - 1] % h[left] == 0) {
                        conditions_met = true;
                    }
                }
            }

            max_length = max(max_length, right - left + 1);
        }

        cout << max_length << endl;
    }

    return 0;
}

