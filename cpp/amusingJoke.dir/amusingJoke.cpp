/**
 *    author:  evoPrg
 *    created: 05.08.2022 00:12:49
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    multiset<char> a;
    multiset<char> b;
    bool res=true;
    string s1, s2, s3; cin >> s1 >> s2 >> s3;
    for (int i=0; i<(int) s1.size(); i++) {
        a.insert(s1[i]);
    }
    for (int i=0; i<(int) s2.size(); i++) {
        a.insert(s2[i]);
    }
    for (int i=0; i<(int) s3.size(); i++) {
        b.insert(s3[i]);
    }
    for (int i=0; i<26; i++) {
        if (a.count((char) ('A'+i))!=b.count((char) ('A'+i))) {
            res = false;
        }
    }
    if (res) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
