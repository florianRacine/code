/**
 *    author:  evoPrg
 *    created: 29.10.2023 16:40:48
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        /*
         *  n is the number of people, 
         *  m is the number of steps, 
         *  k is the height difference between neighboring steps, 
         *  H is Vlad's height.
         */

        vector<int> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        int count = 0;
        for(int i = 0; i < n; i++) {
            if (abs(h[i] - H) % k == 0 && abs(h[i] - H) / k < m && h[i] != H) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
