#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int h[30], a[30];
    int n; cin >> n;
    int count=0;

    for (int i=0; i<n; i++) {
        cin >> h[i] >> a[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i!=j && a[i]==h[j]) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
