/**
 *    author:  evoPrg
 *    created: 26.09.2023 16:14:27
 **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string color = "";
    bool ans = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> color;
            if (color == "C" || color == "M" || color == "Y") {
                ans = false;
            }
        }
    }
    if (ans) {
        cout << "#Black&White" << endl;
    } else {
        cout << "#Color" << endl;
    }
    return 0;
}
