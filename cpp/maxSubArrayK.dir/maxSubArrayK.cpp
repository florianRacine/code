/**
 *    author:  evoPrg
 *    created: 17.11.2023 20:56:18
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int sum = nums[0], currSum = 0;
    int i = 0, j = 0;
    while (i < n) {
        if (nums[i] + currSum > nums[i]) {
            currSum = nums[i] + currSum;
            j++;
        } else {
            currSum = nums[i];
            j = 0;
        }
        if (j >= k) {
            i -= (j - 1);
            j = 0;
            currSum = 0;
        }
        sum = max(sum, currSum);
        i++;
    }
    cout << sum;
    return 0;
}
