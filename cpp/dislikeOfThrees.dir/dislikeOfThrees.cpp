/**
 *    author:  evoPrg
 *    created: 02.02.2023 13:28:07
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> polycarpNumber(1000);
    int i = 1;
    int count = 0;
    while (count < 1000) {
        if ((i % 3 != 0) and ((i - 3) % 10 != 0)) {
            polycarpNumber[count] = i;
            count++;
        }
        i++;
    }
    int tt; cin >> tt;
    while (tt--) {
        int k;
        cin >> k;
        cout << polycarpNumber[k-1] << endl;
    }
    return 0;
}
