/**
 *    author:  evoPrg
 *    created: 12.08.2022 10:29:52
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    bool rep = true;
    int p; cin >> p;
    set<int> s;
    for (int i = 0; i < p; i++) {
        int a; cin >> a;
        s.insert(a);
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int a; cin >> a;
        s.insert(a);
    }
    for (int i = 1; i <= n; i++) {
        if (not (s.count(i))) {
            rep = false;
        }
    }
    if (rep) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    return 0;
}
