/**
 *    author:  evoPrg
 *    created: 29.10.2022 18:37:27
**/
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> s;

void listAllSubList(int k, int n, vector<int> v) {
    if (k == n) {
        s.push_back(v);
    } else {
        listAllSubList(k + 1, n, v);
        v.push_back(k);
        listAllSubList(k + 1, n, v);
        v.pop_back();
    }
}

void outputAllArray() {
    for (int i = 0; i < (int) s.size(); i++) {
        for (int j = 0; j < (int) s[i].size(); j++) {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n; cin >> n;
    vector<int> v;
    listAllSubList(0, n, v);
    cout << s.size() << endl;
    //outputAllArray();
    return 0;
}
