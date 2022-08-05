/**
 *    author:  evoPrg
 *    created: 05.08.2022 22:24:38
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int cPol=0, count=0;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        if (x==-1 && cPol<=0) {
            count++;
        } else if (x==-1 && cPol>0) {
            cPol--;
        } else {
            cPol+=x;
        }
    }
    cout << count;
    return 0;
}
