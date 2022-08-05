#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        int pow=1;
        vector<int> ans;
        while (n>0) {
            if (n%10>0) {
                ans.push_back((n%10)*pow);
            }
            pow*=10;
            n/=10;
        }
        cout << (int) ans.size() << endl;
        for (int i=0; i<(int) ans.size(); i++) {
            cout << ans[i];
            if (i!=(int) ans.size()-1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
