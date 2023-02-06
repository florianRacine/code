/**
 *    author:  evoPrg
 *    created: 06.02.2023 12:50:46
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<bool>> vec{{0,0,0,0,0},{0,1,1,1,0},{0,1,1,1,0},{0,1,1,1,0},{0,0,0,0,0}};
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            int n;
            cin >> n;
            if (n%2 != 0) {
                vec[i][j] = !vec[i][j];
                vec[i+1][j] = !vec[i+1][j];
                vec[i-1][j] = !vec[i-1][j];
                vec[i][j+1] = !vec[i][j+1];
                vec[i][j-1] = !vec[i][j-1];
            }
        }
    }
    for (int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            cout << vec[i][j];
        }
        cout << endl;
    }
    return 0;
}
