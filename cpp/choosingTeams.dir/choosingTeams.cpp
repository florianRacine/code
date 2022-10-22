/**
 *    author:  evoPrg
 *    created: 21.10.2022 23:19:18
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int k; cin >> k;
    vector<int> part(n);
    int countPlayer = 0;
    for (int i = 0; i < n; i++) {
        cin >> part[i];
    }
    sort(part.begin(), part.end());
    for (int i = 0; i < n; i++) {
        if (part[i] <= 5-k) {
            countPlayer++;
        } else {
            cout << countPlayer/3;
            return 0;
        }
    }
    cout << countPlayer/3;
    return 0;
}
