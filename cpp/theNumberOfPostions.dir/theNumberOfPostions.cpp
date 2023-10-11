/**
 *    author:  evoPrg
 *    created: 10.10.2023 22:11:07
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    cout << n - max(a + 1, n - b) + 1;
    return 0;
}
