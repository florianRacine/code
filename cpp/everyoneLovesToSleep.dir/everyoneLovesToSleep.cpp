#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int ecart(int h1, int h2, int m1, int m2) {
    if ((h1==h2 && m1>=m2) || h1>h2) {
        return (h1-h2)*60+(m1-m2);
    } else {
        //ecart entre minuit et l'heure de reveil + l'heure de la sonnerie
        return abs(24*60-(h2*60+m2))+h1*60+m1;
    }
}
 
int32_t main() {
    int t; cin >> t;

    for (int i=0; i<t; ++i) {
        int n, H, M; cin >> n >> H >> M;
        int h, m;
        int arr[11];

        for (int j=0; j<n; ++j) {
            cin >> h >> m;
            arr[j]=ecart(h,H,m,M);
        }

        sort(arr,arr+n);
        
        cout << arr[0]/60 << " " << arr[0]%60 << endl;
    }
}

