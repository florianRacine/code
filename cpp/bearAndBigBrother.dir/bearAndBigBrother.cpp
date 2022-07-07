#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    float a, b;
    int n;
    cin >> a >> b;
    n = 1 + (log(b) - log(a))/(log(3) - log(2));
    cout << n;
    return 0;
}
