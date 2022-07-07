#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    string w;
    int countLuckyNumber = 0;
    cin >> w;

    for (int i=0; i<(int) w.size(); i++) {
        if ((int) w[i] == 52 || (int) w[i] == 55) {
            countLuckyNumber++;
        }
    }
    if (countLuckyNumber == 4 || countLuckyNumber == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
