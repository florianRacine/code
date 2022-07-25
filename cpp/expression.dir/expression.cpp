#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int a, b, c; cin >> a >> b >> c;
    int max=0;
    if (a+b+c > max) {
        max = a+b+c;
    }
    if (a+b*c > max) {
        max = a+b*c;
    }
    if (a*b+c > max) {
        max = a*b+c;
    }
    if (a*(b+c) > max) {
        max = a*(b+c);
    }
    if ((a+b)*c > max) {
        max = (a+b)*c;
    }
    if (a*b*c > max) {
        max = a*b*c;
    }
    cout << max;
    return 0;
}
