#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int MIN_LOWER = 97;
    int MAX_LOWER = 122;
    //int MIN_UPPER = 65;
    //int MAX_LOWER = 90;
    int countLower = 0;
    string w;
    cin >> w;
    for (int i=0; i<(int) w.size(); i++) {
        if ( MIN_LOWER <= (int) w[i] && MAX_LOWER >= (int) w[i]) {
            countLower++;
        } 
    }
    
    if ( countLower >= (int) w.size() - countLower) {
        for (int i=0; i<(int) w.size(); i++) {
            w[i] = tolower(w[i]);
        }
    } else {
        for (int i=0; i<(int) w.size(); i++) {
            w[i] = toupper(w[i]);
        }
    }
    cout << w;

    return 0;
}
