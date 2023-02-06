/**
 *    author:  evoPrg
 *    created: 06.02.2023 18:43:18
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> mp;
    int ai, bi;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ai;
        mp[ai] = i + 1;
    }
    long long sumVasya = 0, sumPetya = 0;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> bi;
        sumVasya += mp[bi];
        sumPetya += n - mp[bi] + 1;
    }
    cout << sumVasya << " " << sumPetya << "\n";
    return 0;
}
