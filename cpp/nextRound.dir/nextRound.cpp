#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n, k;
    int s;
    int numberOfPlayerWhoPass = 0;
    int sLim = 0;

    cin >> n >> k;
    
    for (int i=1; i<=n; i++) {
        cin >> s;
        if (i <= k && s > 0) {
            numberOfPlayerWhoPass++;
            sLim = s;
        }
        else if (sLim == s && s > 0) {
            numberOfPlayerWhoPass++;
        }
    }
    cout << numberOfPlayerWhoPass;
}
