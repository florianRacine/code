/**
 *    author:  evoPrg
 *    created: 06.02.2023 13:33:02
**/
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    for(int i = 2; i < n; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    int nextPrimeNumber = n+1;
    while (not isPrime(nextPrimeNumber)) {
        nextPrimeNumber++;
    }
    if (nextPrimeNumber == m) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
