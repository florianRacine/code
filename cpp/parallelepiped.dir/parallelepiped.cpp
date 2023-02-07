/**
 *    author:  evoPrg
 *    created: 07.02.2023 18:24:05
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int a = sqrt((X*Z)/Y);
    int b = sqrt((X*Y)/Z);
    int c = sqrt((Z*Y)/X);
    cout << (4*(a+b+c)) << endl;
    return 0;
}
