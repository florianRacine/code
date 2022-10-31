/**
 *    author:  evoPrg
 *    created: 30.10.2022 10:59:39
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    long long fX = 1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = arr[0] + 1; i <= x; i++) {
        fX *= i;
    }
    int iBeg = 1;
    while (arr[iBeg] == arr[0] and iBeg < n-1) {
        iBeg++;
    }
    long long sD = iBeg;
    int d = 1;
    int min = arr[0];
    for (int i = iBeg; i < n; i++) {
        for (int j = min + 1; j <= arr[i]; j++) {
            d *= j;
        }
        sD += d;
        min = arr[i];
    }
    if (sD % fX == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
