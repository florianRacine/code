/**
 *    author:  evoPrg
 *    created: 26.10.2022 18:21:47
**/
#include <bits/stdc++.h>

using namespace std;

int sizeMaxSplit(int i, int sumSplitToFind, int n, int a[]) {
    if (i == n) {
        return 0;
    } else {
        int sumCurrentSplit = 0;
        for (int j = i; j < n; j++) {
            sumCurrentSplit += a[j];
            if (sumCurrentSplit > sumSplitToFind) {
                return n;
            } else if (sumCurrentSplit == sumSplitToFind) {
                return max(j - i + 1, sizeMaxSplit(j + 1, sumSplitToFind, n, a));
            }
        }
        return n;
    }
}

int solve() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = n, sumSplitToFind = 0;
    for (int i = 0; i < n - 1; i++) {
        sumSplitToFind += a[i];
        ans = min(ans, sizeMaxSplit(0, sumSplitToFind, n, a));
    }
    return ans;
}

int main() {
    int tt; cin >> tt;
    while (tt--) {
        cout << solve() << endl;
    } 
    return 0;
}
