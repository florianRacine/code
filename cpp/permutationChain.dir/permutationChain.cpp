/**
 *    author:  evoPrg
 *    created: 04.08.2022 16:47:32
**/
#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

void printA(vector <int> a, int n) {
    for (int i=0; i<n; i++) {
        cout << a[i];
        if (i!=n-1) {
            cout << " ";
        }
    }
    cout << endl;
}
 
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        vector <int> a(n);
        for (int i=0; i<n; i++) {
            a[i] = i+1;
        }
        cout << n << endl;
        for (int i=0; i<n; i++) {
            if (i>0) {
                int c;
                c = a[i];
                a[i] = a[i-1];
                a[i-1] = c;
            }
            printA(a, n);
        }
    }
    return 0;
}
