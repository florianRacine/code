#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

bool diff(string w1, string w2) {
    for (int i=0; i<(int) w1.size(); i++) {
        if (w1[i] != w2[(int) w1.size() - i - 1]) {
            return true;
        }
    } 
    return false;
}

int32_t main() {
    string w1, w2;
    cin >> w1 >> w2;

    if (diff(w1, w2)) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;

    
}
