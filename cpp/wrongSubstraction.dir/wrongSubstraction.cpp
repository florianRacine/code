#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int wrongSubstraction(int n) {
    if (n % 10 == 0 ) {
        return n/10;
    } else {
        return --n;
    }
}
 
int32_t main() {
    int n,k;
    cin >> n >> k;
    for (int i=0; i<k; i++) {
        n = wrongSubstraction(n);
    }
    cout << n;
}
