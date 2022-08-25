/**
 *    author:  evoPrg
 *    created: 19.08.2022 12:45:29
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> vec(4);
    int max = -1, iMax = -1;
    for (int i = 0; i < 4; i++) {
        cin >> vec[i];
        if (max < vec[i]) {
            max = vec[i];
            iMax = i;
        }
    }
    vector<int> ans;
    for (int i = 0; i < 4; i++) {
        if (iMax != i) {
            ans.push_back(max - vec[i]);
        }
    }
    cout << ans[0] << " " << ans[1] << " " << ans[2];
    return 0;
}
