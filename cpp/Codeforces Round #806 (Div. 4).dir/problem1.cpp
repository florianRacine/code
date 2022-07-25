#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

string toLower(string w) {
    for (int i=0; i<(int)w.size(); i++) {
        w[i] = tolower(w[i]);
    }
    return w;
}
 
int32_t main() {
    int t; cin >> t;
    string w;
    for (int i=0; i<t; i++) {
        cin >> w;
        w = toLower(w);
        if (w== "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
