#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n;
    int lenW;
    string word;

    cin >> n;
    for (int i=0; i<n; i++) {
       cin >> word; 
       lenW = word.size();
       if(lenW > 10) {
           cout << word[0] << lenW - 2 << word[lenW-1] << endl;
       } else {
           cout << word << endl;
       }
    }
}
