/**
 *    author:  evoPrg
 *    created: 04.02.2023 17:14:46
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        vector<int> vec(3);
        for (int i = 0; i < 3; i++) {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        cout << vec[1] << endl;
    }
    return 0;
}
