/**
 *    author:  evoPrg
 *    created: 05.04.2023 19:35:43
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> mp;
    vector<pair<string, int>> v;
    vector<string> nm;
    for (int i = 0; i < n; i++) {
        string name;
        int score;
        cin >> name >> score;
        v.push_back(make_pair(name, score));
        if (mp[name] == 0) {
            nm.push_back(name);
        }
        mp[name] += score;
    }
    int m = -1000;
    for (int i = 0; i < (int) nm.size(); i++) {
        if (m < mp[nm[i]]) {
            m = mp[nm[i]];
        }
    }
    set<string> st;
    for (int i = 0; i < (int) nm.size(); i++) {
        if (mp[nm[i]] == m) {
            st.insert(nm[i]);
        }
    }
    map<string, int> mp2;
    for (int i = 0; i < n; i++) {
        mp2[v[i].first] += v[i].second;
        if (mp2[v[i].first] >= m and st.count(v[i].first) == 1) {
            cout << v[i].first;
            return 0;
        }
    }
}
