/**
 *    author:  evoPrg
 *    created: 07.02.2023 18:42:33
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min = abs(a[n-1]-a[0]);
    int val = 0, sold1 = n-1, sold2 = 0;
    for (int i = 0; i < n-1; i++) {
        val = abs(a[i]-a[i+1]);
        if (val < min) {
            sold1 = i;
            sold2 = i+1;
            min = val;
        }
    }
    cout << sold1 + 1 << " " << sold2 + 1;
    return 0;
}
