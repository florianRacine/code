/**
 *    author:  evoPrg
 *    created: 25.10.2022 20:30:05
**/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    multiset<char> sA, sB;
    for (int i = 0; i < (int) a.size(); i++) {
        sA.insert(a[i]);
    }
    for (int i = 0; i < (int) b.size(); i++) {
        sB.insert(b[i]);
    }

    bool condition1A = sA.count((char) 'S') > sB.count((char) 'S');
    bool condition2A = sA.count((char) 'L') < sB.count((char) 'L');
    bool condition3A = a[(int) a.size()-1] == b[(int) b.size()-1] and a[(int) a.size()-1] == (char) 'L' and sA.count((char) 'X') < sB.count((char) 'X');
    bool condition4A = a[(int) a.size()-1] == b[(int) b.size()-1] and a[(int) a.size()-1] == (char) 'S' and sA.count((char) 'X') > sB.count((char) 'X');

    bool condition1B = sA.count((char) 'S') < sB.count((char) 'S');
    bool condition2B = sA.count((char) 'L') > sB.count((char) 'L');
    bool condition3B = a[(int) a.size()-1] == b[(int) b.size()-1] and a[(int) a.size()-1] == (char) 'L' and sA.count((char) 'X') > sB.count((char) 'X');
    bool condition4B = a[(int) a.size()-1] == b[(int) b.size()-1] and a[(int) a.size()-1] == (char) 'S' and sA.count((char) 'X') < sB.count((char) 'X');

    if (condition1A or condition2A or condition3A or condition4A) {
        cout << "<" << endl;
        } else if (condition1B or condition2B or condition3B or condition4B) {
        cout << ">" << endl;
    } else {
        cout << "=" << endl;
    }
}

int main() {
    int tt; cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
