#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int fact(int n) {
    if (n==1) {
        return 1;
    } else {
        return fact(n-1)*n;
    }
}
 
int32_t main() {
    int n;
    int m;
    cin >> m;
    n = fact (m);
    std::cout << n << std::endl;
}
