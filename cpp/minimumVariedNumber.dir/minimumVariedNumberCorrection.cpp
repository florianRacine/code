#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int s; cin >> s;
        string res="";
        for (int i=9; i>=1; i--) {
            if (s>=i) {
                res += (char) ('0' + i);
                s -= i;
            }
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
    }
    return 0;
}
