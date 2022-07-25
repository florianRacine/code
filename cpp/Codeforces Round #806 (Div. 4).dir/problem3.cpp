#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int32_t main() {
    int t, n, counter=0, a[100], b[100];
    string w[100];
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> n;
        for (int j=0; j<n; j++) cin >> a[j];
        for (int j=0; j<n; j++) {
            cin >> b[j] >> w[j];
            counter = (10 + count(w[j].begin(), w[j].end(), 'D') - count(w[j].begin(), w[j].end(), 'U'))%10;
            cout << (a[j]+counter)%10;
            j!=n-1?cout << " ":cout << endl;
        }
    }
    return 0;
}
    

