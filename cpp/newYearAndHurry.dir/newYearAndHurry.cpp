/**
 *    author:  evoPrg
 *    created: 05.08.2022 22:17:58
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int time = 4*60-k;
    int count = 0;
    for (int i=1; i<=n; i++) {
        if (time-5*i>=0) {
            time -= 5*i;
            count++;
        }
    }
    cout << count;
    return 0;
}
