/**
 *    author:  evoPrg
 *    created: 02.02.2023 14:27:37
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, s, r;
        cin >> n >> s >> r;
        cout << s - r;
        int max = s - r;
        n--;
        while (r > 0) {
            cout << " ";
            for (int i = 6; i >= 0; i--) {
                if (n - 1 <= r - i and i <= max) {
                    cout << i;
                    r -= i;
                    n--;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
