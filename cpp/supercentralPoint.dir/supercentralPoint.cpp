/**
 *    author:  evoPrg
 *    created: 07.02.2023 15:05:06
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector<vector<int>> vec(n, {0,0});
    for (int i = 0; i < n; i++) {
        cin >> vec[i][0] >> vec[i][1];
    }
    for (int i = 0; i < n; i++) {
        bool left = false, right = false, up = false, down = false;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (vec[i][0] > vec[j][0] and vec[i][1] == vec[j][1]) {
                    left = true;
                } else if (vec[i][0] < vec[j][0] and vec[i][1] == vec[j][1]) {
                    right = true;
                } else if (vec[i][0] == vec[j][0] and vec[i][1] < vec[j][1]) {
                    up = true;
                } else if (vec[i][0] == vec[j][0] and vec[i][1] > vec[j][1]) {
                    down = true;
                }
                if (left and right and up and down) {
                    count ++;
                    break;
                }
            }
        }
    }
    cout << count;
    return 0;
}
