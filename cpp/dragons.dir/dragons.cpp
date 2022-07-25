#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int s, n; cin >> s >> n;
    int xy[1000][2];
    int countDragonsSlain = 0;
    for (int i=0; i<n; i++) {
        cin >> xy[i][0] >> xy[i][1];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (xy[j][0] < s && xy[j][0] != -1) {
                s += xy[j][1];
                countDragonsSlain++;
                xy[j][0] = -1;
            }
        }
    }
    if (countDragonsSlain == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
