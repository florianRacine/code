#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n, p, q, a[101] = {0}, j;
    cin >> n >> p;
    for (int i=0; i<p; i++) {
        cin >> j;
        if (a[j] == 0) {
            a[j]++;
            n--;
        }
    }
    cin >> q;
    for (int i=0; i<q; i++) {
        cin >> j;
        if (a[j] == 0) {
            a[j]++;
            n--;
        }
    }
    if (n == 0) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}
