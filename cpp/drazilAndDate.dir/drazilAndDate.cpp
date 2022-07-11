#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int a, b, s;
    cin >> a >> b >> s;
    a = abs(a);
    b = abs(b);
    if (s < a+b) {
        cout << "No";
    } else if (s == a+b) {
        cout << "Yes";
    } else if ((s-a-b)%2==0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
