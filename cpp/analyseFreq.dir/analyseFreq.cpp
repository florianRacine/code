/**
 *    author:  evoPrg
 *    created: 21.04.2023 14:11:57
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = (int) s.size();
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]] ++;
    }
    cout << "ok 1" << endl;
    vector<pair<int,char>> vec;
    for (auto it:mp) {
        vec.push_back({it.second, it.first});
    }
    sort(vec.rbegin(), vec.rend());
    cout << "ok 2" << endl;
    vector<char> nor = {'e', 'a', 'i', 's', 'n', 'r', 't', 'o', 'l', 'u', 'd', 'c', 'm', 'p', 'g', 'b', 'v', 'h', 'f', 'q', 'y', 'x', 'j', 'k', 'w', 'z'};
    unordered_map <char, char> ass;
    for (int i = 0; i < (int) vec.size(); i++) {
        ass[vec[i].second] = nor[i];
        cout << vec[i].second << " : " << vec[i].first << " : " << nor[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << ass[s[i]];
    }


    return 0;
}
