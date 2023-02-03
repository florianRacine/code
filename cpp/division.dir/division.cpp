/**
 *    author:  evoPrg
 *    created: 02.02.2023 13:50:02
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int rating;
        int X;
        cin >> rating;
        if (rating <= 1399) {
            X = 4;
        } else if (rating <= 1599) {
            X = 3;
        } else if (rating <= 1899) {
            X = 2;
        } else {
            X = 1;
        }
        cout << "Division " << X << endl;
    }
    return 0;
}
