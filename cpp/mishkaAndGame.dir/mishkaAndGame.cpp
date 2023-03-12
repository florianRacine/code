/**
 *    author:  evoPrg
 *    created: 12.03.2023 14:01:33
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int countM = 0, countC = 0;
    int m, c;
    for (int i = 0; i < n; i++) {
        cin >> m >> c;
        if (m > c) {
            countM ++;
        } else if (m < c) {
            countC++;
        }
    }
    if (countM > countC) {
        cout << "Mishka" << endl;
    } else if (countM < countC) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}
