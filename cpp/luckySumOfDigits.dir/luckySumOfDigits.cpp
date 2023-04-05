/**
 *    author:  evoPrg
 *    created: 04.04.2023 15:22:13
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b;
    b = 0;
    a = (n - b * 7) / 4;
    while (a * 4 + b * 7 != n) {
        b++;
        a = (n - b * 7) / 4;
        if (b*7 > n) {
            cout << "-1" << endl;
            return 0;
        }
    }
    for (int i = 0; i < a; i++) {
        cout << "4";
    }
    for (int i = 0; i < b; i++) {
        cout << "7";
    }
    cout << endl;
    return 0;
}
