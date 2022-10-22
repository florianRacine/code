/**
 *    author:  evoPrg
 *    created: 21.10.2022 12:45:30
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        vector<string> stripes(8);
        bool red = false;
        for (int i = 0; i < 8; i++) {
            cin >> stripes[i];
            if (stripes[i] == "RRRRRRRR") {
                red = true;
            }
        }
        if (red == true) {
            cout << "R" << endl;
        } else {
            cout << "B" << endl;
        }
    }
    return 0;
}
