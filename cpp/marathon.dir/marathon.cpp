#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int t; cin >> t;
    int a, b, c, d;
    int count=0;
    for (int i=0; i<t; i++) {
        cin >> a >> b >> c >> d;
        if (a<b) count++;
        if (a<c) count++;
        if (a<d) count++;
        cout << count << endl;
        count=0;
    }
    return 0;
}
