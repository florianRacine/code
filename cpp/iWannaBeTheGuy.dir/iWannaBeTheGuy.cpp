#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    set<int> s;
    int n; cin >> n;
    int p, q;
    int a;
    cin >> p;

    for (int i=0; i<p; i++) {
        cin >> a;
        s.insert(a);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> a;
        s.insert(a);
    }

    if ((int) s.size() == n) {
       cout << "I become the guy.";
    } else {
       cout << "Oh, my keyboard!";
    }
    return 0;
}
