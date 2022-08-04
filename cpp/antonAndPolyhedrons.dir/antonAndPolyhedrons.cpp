/**
 *    author:  evoPrg
 *    created: 04.08.2022 23:59:23
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int res=0;
    for (int i=0; i<n; i++) {
        string s; cin >> s;
        if (s=="Tetrahedron") res+=4;
        else if (s=="Cube") res+=6;
        else if (s=="Octahedron") res+=8;
        else if (s=="Dodecahedron") res+=12;
        else if (s=="Icosahedron") res+=20;
    }
    cout << res << endl;
    return 0;
}
