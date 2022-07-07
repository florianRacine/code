#include <bits/stdc++.h>
 
using namespace std;
 
int32_t main() {
    long long n, m, t;
    long long arr[1000];
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        arr[i] = m*(m-1)/2 + m*n*(n+1)/2;
    }
    for (int i = 0; i < t; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
