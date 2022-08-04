/**
 *    author:  evoPrg
 *    created: 04.08.2022 16:35:16
**/
#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        int res;
        if(n%3==0) {
            res = n/3;
        } else if (n%3==1 && n!=1) {
            res = n/3 + 1;
        } else if (n==1) {
            res = 2;
        } else {
            res = n/3 + 1;
        }
        cout << res << endl;
    }
    return 0;
}
