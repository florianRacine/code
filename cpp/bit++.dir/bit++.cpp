#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n;
    int x = 0;
    string operation;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> operation;
        if (operation == "++X" || operation == "X++") x++;
        if (operation == "--X" || operation == "X--") x--;
    }
    cout << x;
}

