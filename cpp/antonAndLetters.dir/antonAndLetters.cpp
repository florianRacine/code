#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    set<int> s;
    string a;
    cin >> a;
    if (a[1] == '}') {
        cout << "0";
    } else if (a[2] == '}') {
        cout << "1";
    } else {
        s.insert(a[1]);
        while (cin >> a) {
            s.insert(a[0]);
        }
        cout << s.size();
    }
    return 0;
}
