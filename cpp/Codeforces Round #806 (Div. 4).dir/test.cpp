#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    multiset<char> ms;
    string w="AAABBBABA";
    for (char c: w) {
        ms.insert(c);
    }
    cout << ms.count('A');
}
