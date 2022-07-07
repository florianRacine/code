#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n; cin >> n;
    string m1, m2; cin >> m1;
    int countGroup = 1;

    for (int i=1; i<n; i++) {
        cin >> m2;
        if (m1[1] == m2[0]) {
            countGroup++;
        }
        m1 = m2;
    }
    cout << countGroup;
    return 0;
}
