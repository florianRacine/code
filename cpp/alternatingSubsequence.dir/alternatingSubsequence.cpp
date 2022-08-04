#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        ll oldA, a, max=-pow(10,9)-1;
        ll res=0;

        for (int i=0; i<n; i++) {
            cin >> a;
            if(i==0) oldA=a;
            if(a*oldA<0) {
                res+=max;
                max=-pow(10,9)-1;
            }
            if(a>max) {
                max=a;
            }
            oldA = a;
        }
        res+=max;
        cout << res << endl;
    }
    return 0;
}
