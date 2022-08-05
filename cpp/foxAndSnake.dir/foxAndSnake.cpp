/**
 *    author:  evoPrg
 *    created: 05.08.2022 20:09:42
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    bool right = true;
    for (int i=0; i<n; i++) {
        if (i%2==0) {
            for (int j=0; j<m; j++) cout << '#';
        } else {
            bool already = false;
            for (int j=0; j<m; j++) {
                if (j==0 && !right && !already) {
                    cout << '#';
                    right = true;
                    already = true;
                } else if (j==m-1 && right && !already) {
                    cout << '#';
                    right = false;
                    already = true;
                }
                else {
                    cout << '.';
                }
            }
        }
    cout << endl;
    }
    return 0;
}
