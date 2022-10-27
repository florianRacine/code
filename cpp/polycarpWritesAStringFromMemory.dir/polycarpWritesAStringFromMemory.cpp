/**
 *    author:  evoPrg
 *    created: 27.10.2022 12:40:13
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        string s;
        cin >> s;
        set<int> v;
        int countDay = 0;
        for (int i = 0; i < (int) s.size(); i++) {
            v.insert(s[i]);
            if ((int) v.size() > 3) {
                v.clear();
                v.insert(s[i]);
                countDay++;
            }
        }
        if ((int) v.size() != 0) {
            countDay++;
        }
        cout << countDay << endl;
    }
    return 0;
}
