/**
 *    author:  evoPrg
 *    created: 28.10.2022 21:52:23
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    map<pair<int,int>, int> mp;
    int count = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (i != j) {
                count++;
                mp[make_pair(i, j)] = count;
            }
        }
    }
    int tt; cin >> tt;
    while (tt--) {
        string w;
        cin >> w;
        cout << mp[make_pair(((int) w[0]) - 'a', ((int) w[1]) - 'a')] << endl;
    }
    return 0;
}
