/**
 *    author:  evoPrg
 *    created: 05.08.2022 15:20:43
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    if (x1==x2) {
        cout << x1+abs(y1-y2) << " " << min(y1,y2) << " " << x1+abs(y1-y2) << " " << max(y1,y2);
    } else if (y1==y2) {
        cout << min(x1,x2) << " " << y1+abs(x1-x2) << " " << max(x1,x2) << " " << y1+abs(x1-x2);
    } else if ((x1!=x2 && y1!=y2) && (abs(x1-x2)==abs(y1-y2))) {
        if ((x1<x2 && y1<y2) || (x1>x2 && y1>y2)) {
            cout << min(x1,x2) << " " << max(y1,y2)  << " " << max(x1,x2) << " " << min(y1,y2);
        } else {
            cout << min(x1,x2) << " " << min(y1,y2)  << " " << max(x1,x2) << " " << max(y1,y2);
        }
    } else {
        cout << -1;
    }
    return 0;
}
