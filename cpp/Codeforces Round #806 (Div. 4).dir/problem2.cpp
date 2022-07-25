#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

bool isLetterInWord(string w, char c) {
    for (int i=0; i<(int)w.size(); i++) {
        if (w[i]==c) {
            return true;
        }
    }
    return false;
}
 
int32_t main() {
    int t; cin >> t;
    int n;
    string w;
    char v;
    int count = 0;

    for (int i=0; i<t; i++) {
        cin >> n;
        for (int j=0; j<n; j++) {
            cin >> v;
            if (isLetterInWord(w, v)) {
                count++;
            } else {
                count+=2;
                w += v;
            }
        }
        cout << count << endl;
        count =0;
        w = "";
    }
    return 0;
}
