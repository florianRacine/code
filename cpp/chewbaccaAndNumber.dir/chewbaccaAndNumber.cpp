/**
 *    author:  evoPrg
 *    created: 05.08.2022 14:56:02
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string x; cin >> x;
    for (int i=0; i<(int) x.size(); i++) {
        if (x[i]>='5' && !(x[i]=='9' && i==0)) {
            x[i]=(char) ('9'-x[i]+'0');
        }
    }
    cout << x;
    return 0;
}
