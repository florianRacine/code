#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n; cin >> n;
    int opinion;
    for (int i=0; i<n; i++) {
        cin >> opinion;
        if (opinion == 1) {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}
