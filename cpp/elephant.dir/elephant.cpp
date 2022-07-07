#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int x, div=5;
    int pas=0;
    cin >> x;
    while (x != 0) {
        pas += (int) x/div;
        x = x - (x/div)*div;
        div--;
    }
    cout << pas;
}
