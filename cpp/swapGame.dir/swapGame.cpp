/**
 *    author:  evoPrg
 *    created: 12.11.2022 23:33:21
**/
#include <bits/stdc++.h>

using namespace std;

long long MAX = 1000000000;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        long long arr[n];
        long long min = MAX;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (min > arr[i]) min = arr[i];
        }
        if (arr[0] == min) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }
    return 0;
}
