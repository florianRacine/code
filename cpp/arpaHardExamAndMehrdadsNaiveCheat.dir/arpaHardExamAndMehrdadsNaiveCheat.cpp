/**
 *    author:  evoPrg
 *    created: 08.10.2023 16:08:56
 **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << "1";
    } else {
        int res = (n / 4 + (n % 4 != 0)) * 4 - n;
        if (res == 0) {
            cout << "6";
        } else if (res == 1) {
            cout << "2";
        } else if (res == 2) {
            cout << "4";
        } else if (res == 3) {
            cout << "8";
        }
    }
    return 0;
}
