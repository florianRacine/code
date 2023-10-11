/**
 *    author:  evoPrg
 *    created: 10.10.2023 21:55:51
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    unordered_map <string, string> mp1;
    for (int i = 0; i < m; i++) {
        string w1, w2;
        cin >> w1 >> w2;
        mp1[w1] = w2;
    }
    for (int i = 0; i < n; i++) {
        string w;
        cin >> w;
        if(mp1[w].size() >= w.size()) {
            cout << w << " ";
        } else {
            cout << mp1[w] << " ";
        }
    }
    return 0;
}
