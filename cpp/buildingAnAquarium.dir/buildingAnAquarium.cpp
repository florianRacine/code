/**
 *    author:  evoPrg
 *    created: 21.09.2023 17:39:44
**/
#include <bits/stdc++.h>

using namespace std;

long long calculateWater(int h, vector<long long>& a) {
    long long water = 0;
    int n = a.size();

    for (int i = 0; i < n; i++) {
        if (a[i] <= h) {
            water += h - a[i];
        }
    }
    return water;
}

int main() {
    int tt; cin >> tt;
    while (tt--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n); 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int min_h = 1;
        int max_h = (*min_element(a.begin(), a.end())) + x;

        while (min_h <= max_h) {
            int mid_h = min_h + (max_h - min_h) / 2;
            long long waterUsed = calculateWater(mid_h, a);

            if (waterUsed <= x) {
                min_h = mid_h + 1;
            } else {
                max_h = mid_h - 1;
            }
        }
        cout << min_h - 1 << endl;
    }
    return 0;
}
