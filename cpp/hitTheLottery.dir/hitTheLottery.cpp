#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    int n; cin >> n;
    cout << n/100 + (n%100)/20 + ((n%100)%20)/10 + (((n%100)%20)%10)/5 + ((((n%100)%20)%10)%5)/1 << endl;
    return 0;
}
