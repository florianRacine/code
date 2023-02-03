/**
 *    author:  evoPrg
 *    created: 02.02.2023 15:47:46
**/
#include <bits/stdc++.h>

using namespace std;

bool falseIsIn(vector<bool> vec) {
    for (int i = 0; i < (int) vec.size(); i++) {
        if (vec[i] == false) {
            return true;
        }
    }
    return false;
}

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<long long> set;
        set.push_back(a[0]);
        int count = 0;
        visited[0] = true;
        while (falseIsIn(visited)) {
            for (int i = 1; i < n; i++) {
                if ((set[(int) set.size() - 1] == a[i] + 1) and (visited[i] == false)) {
                    set.push_back(a[i]);
                    visited[i] = true;
                }
                else if ((set[(int) set.size() - 1] != a[i]) and (visited[i] == false)) {
                    set.clear();
                    set.push_back(a[i]);
                    visited[i] = true;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
