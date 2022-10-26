/**
 *    author:  evoPrg
 *    created: 26.10.2022 17:04:50
**/
#include <bits/stdc++.h>

using namespace std;

int go(int i, int sum, int n, int arr[]) {
	if (i == n) {
            return 0;   
	} else {
            int cur = 0;
            for (int j = i; j < n; j++) {
                cur += arr[j];
                if (cur > sum) {
                    return n;   
                } else if (cur == sum) {
                    return max(j - i + 1, go(j + 1, sum, n, arr));   
                }
            }
            return n;
	}
}

int solve() {
    int n; cin >> n; 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = n, sum = 0;
    for (int i = 0; i < n-1; i++) {
        sum += arr[i];
        ans = min(ans, go(0, sum, n, arr));
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
