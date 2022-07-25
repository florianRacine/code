#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    string s; cin >> s;
    string w = "hello";
    int i=0, j=0;
    while (j<(int) s.size() && i<(int) w.size()) {
        if (w[i] == s[j]) {
            i++;
        }
        j++;
    }
    if (i == (int) w.size()) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
