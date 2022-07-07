#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int p, v, t;
    int total;
    int n;
    int numberOfProblemToSolve = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> p >> v >> t;
        total = p + v + t;
        if (total >= 2) {
           numberOfProblemToSolve++;
        }     
    }
    cout << numberOfProblemToSolve;
}
