#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int t; cin >> t;
    for (int i=0; i<t; ++i) {
        int n, m; cin >> n >> m;
        string a, b; cin >> a >> b;
        while (a.size()>b.size()) {
            if (b[0]=='0' && a[0]=='0' && a[1]=='1') {
                a=a.substr(1,a.size()-1);
                a[0]='0';
            } else if (b[0]=='1' && a[0]=='1' && a[1]=='0') {
                a=a.substr(1,a.size()-1);
                a[0]='1';
            } else {
                a=a.substr(1,a.size()-1);
            }
        }
        if (a==b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
