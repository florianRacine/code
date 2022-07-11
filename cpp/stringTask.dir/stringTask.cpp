#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

bool vowel(char a) {
    char vowelRef[6] = {'a', 'o', 'y', 'e', 'u', 'i'};
    for (int i=0; i<6; i++) {
        if (a==vowelRef[i]) {
            return true;
        }
    }
    return false;
}
 
int32_t main() {
    string w; cin >> w;
    for (int i=0; i<(int) w.size(); i++) {
        char c = (char) tolower(w[i]);
        if (not vowel(c)) {
            cout << "." << c;
        }
    }
}
