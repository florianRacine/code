#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

bool ok(int a[1000000], int s, int m, int x, int v) {
    for (int i=s; i<m; ++i) {
        if(abs(v-a[i])>x) {
            return false;
        }
    }
    return true;
}

 
int32_t main() {
    int t; cin >> t;
    for (int i=0; i<t; ++i) {
        int n, x; cin >> n >> x;
        int a[1000000];
        for (int j=0; j<n; ++j) {
            cin >> a[j];
        }

        int k=0; 
        int count =0;

        while (k<n) {
            int j=1;
            int s=a[k];
            while(ok(a, k, k+j, x, s/j) && j+k<n) {
                s+=a[k+j];
                j++;
                //cout << "s = " << s << endl;
                
            }    
            k+=j;
            count++;
            //cout << "s/j = " << s/j << endl;
        }
    cout << count-1 << endl;
    }
}
