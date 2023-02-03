/**
 *    author:  evoPrg
 *    created: 02.02.2023 14:20:25
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string digits = "314159265358979323846264338327";
    int tt; cin >> tt;
    while (tt--) {
        string n;
        cin >> n;
        for (int i = 0; i < (int) n.size(); i++) {
            if (n[i] != digits[i]) {
                cout << i << endl;
                break;
            } else if(i == (int) n.size() -1) {
                cout <<  (int) n.size() << endl;
            }
        }
    }
    return 0;
}
