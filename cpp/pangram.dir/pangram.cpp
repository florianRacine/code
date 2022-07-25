#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

string toLower(string w) {
    for (int i=0; i<(int)w.size(); i++) {
        w[i] = (char) tolower(w[i]);
    }
    return w;
}

bool isLetterInWord(string w, char c) {
    for (int i=0; i<(int)w.size(); i++) {
        if (w[i]==c) {
            return true;
        }
    }
    return false;
}
 
int32_t main() {
    int n; cin >> n;
    string w; cin >> w;
    char a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    w = toLower(w);
    for (int i=0; i<26; i++) {
        if (not isLetterInWord(w, a[i])) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
