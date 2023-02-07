/**
 *    author:  evoPrg
 *    created: 07.02.2023 15:23:21
 **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(7);
    for (int i = 0; i < 7; i++) {
        cin >> v[i];
    }
    int pageReaded = 0, j = 0;
    while (pageReaded < n) {
        if (j > 6) {
            j = 0;
        } 
        pageReaded += v[j];
        j++;
    }
    cout << j;
    return 0;
}
