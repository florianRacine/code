/**
 *    author:  evoPrg
 *    created: 05.02.2023 19:22:54
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        string a, b, c;
        int n = (int) s.size();
        for (int i = 1; i < n - 1; i++) {
            for (int j = 1; j < n - i; j++) {
                a = s.substr(0, i);
                b = s.substr(i, j);
                c = s.substr(i + j, n);
                if ((a.compare(b) >= 0 and c.compare(b) >= 0) or (b.compare(a) >= 0 and b.compare(c) >= 0)) {
                    cout << a << " ";
                    cout << b << " ";
                    cout << c << "\n";
                    i = j = n;
                }
            }
        }
    }
    return 0;
}
