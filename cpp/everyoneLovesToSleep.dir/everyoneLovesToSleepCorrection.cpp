#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, H, M; cin >> n >> H >> M;
        int ans=24*60+1;
        int x=H*60+M;
        for (int i=0; i<n; i++) {
            int h, m; cin >> h >> m;
            int y=h*60+m;
            int diff=y-x;
            if (diff<0) diff+=1440;
            if (diff<ans) ans=diff;
        }
        cout << ans/60 << " " << ans%60 << endl;
    }
    return 0;
}
