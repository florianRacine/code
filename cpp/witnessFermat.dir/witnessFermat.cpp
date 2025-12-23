/**
 *    author:  evoPrg
 *    created: 16.10.2023 12:07:03
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    vector<int> b_a = {1, 0, 1, 0, 0, 0, 0, 0};
    int k = (int) b_a.size();

    int result = 1, c = 0;
    for (int i = k - 1; i >= 0; i--) {
        result = (result * result) % n;
        c = 2 * c;
        if (b_a[k - i - 1]) {
            result = (result * a) % n;
            c ++;
        }
        cout << "i = " << i << endl;
        cout << "b_i = " << b_a[k - i - 1] << endl;
        cout << "result = " << result << endl;
        cout << "c = " << c << endl;
        cout << endl;
    }
    if (result != 1) {
        cout << "True" << endl;
    } else {
        cout << "No" << endl;
    }


    return 0;
}
