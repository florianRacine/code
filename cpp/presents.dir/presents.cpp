#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n; cin >> n;
    int p;
    int arr[100];
    for (int i=1; i<n+1; i++) {
        cin >> p;
        arr[p] = i;
    }
    for (int i=1; i<n+1; i++) {
        cout << arr[i];
        if (i!=n) cout << " ";
    }
}
