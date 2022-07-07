#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    string w1, w2; cin >> w1 >> w2;
    string rW;
    for (int i=0; i< (int) w1.size(); i++) {
        if (w1[i] == w2[i]) {
            rW += '0';
        } else {
            rW += '1';
        }
    }
    cout << rW;
}
