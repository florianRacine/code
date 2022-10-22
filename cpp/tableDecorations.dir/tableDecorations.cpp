/**
 *    author:  evoPrg
 *    created: 21.10.2022 23:32:46
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long r, g, b; cin >> r >> g >> b;
    long long t = 0;
    while (r + g + b >= 3) {
        if (r < g and g <= b) {
            b -= 2;
            g--;
            t++;
        } else if (g < r and r <= b) {
            b -= 2;
            r--;
            t++;
        } else if (r < b and b <= g) {
            g -= 2;
            b--;
            t++;
        } else if (b < r and r <= g) {
            g -= 2;
            r--;
            t++;
        } else if (b < g and g <= r) {
            r -= 2;
            g--;
            t++;
        } else if (g < b and b <= r) {
            r -= 2;
            b--;
            t++;
        }
        if (r == g and g == b) {
            t += r;
            r = 0; g = 0; b = 0;
        }
    }
    cout << t;
    return 0;
}
