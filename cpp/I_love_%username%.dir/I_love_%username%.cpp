/**
 *    author:  evoPrg
 *    created: 05.08.2022 20:40:54
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int min, max, score; cin >> score;
    min = max = score;
    int count = 0;
    for (int i=0; i<n-1; i++) {
        cin >> score;
        if (score < min) {
            min = score;
            count++;
        }
        if (score > max) {
            max = score;
            count++;
        }
    }
    cout << count;
    return 0;
}
