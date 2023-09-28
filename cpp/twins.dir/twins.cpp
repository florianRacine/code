/**
 *    author:  evoPrg
 *    created: 28.09.2023 16:21:59
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> a(n);
    int sumA = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sumA += a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (sum*2 <= sumA) {
            ans ++;
            sum += a[i];
        } else {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
