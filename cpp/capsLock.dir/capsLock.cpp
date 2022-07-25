#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

bool capsLock(string w) {
    for (int i=1; i<(int) w.size(); i++) {
        if (islower(w[i])) {
            return false;
        }
    }
    return true;
}
 
int32_t main() {
    string w; cin >> w;
    if (capsLock(w)) {
        if(islower(w[0])) {
            cout << (char) toupper(w[0]);
        } else {
            cout << (char) tolower(w[0]);
        }
        for (int i=1; i<(int) w.size(); i++) {
            cout << (char) tolower(w[i]);
        }
    } else {
        cout << w;
    }
    
}
