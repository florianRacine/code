#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n; cin >> n;
    int min=100, max=0;
    int iMin=0, iMax=0;
    int a;
    for (int i=0; i<n; i++) {
        cin >> a;
        if (a>max) {
            iMax = i;
            max = a;
        } 
        if (a<=min) {
            iMin = i;
            min = a;
        }
    }
    if (iMax > iMin) {
        cout << iMax + n-iMin-1 -1;
    } else {
        cout << iMax + n-iMin-1;
    }
}
