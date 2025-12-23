/**
 *    author:  evoPrg
 *    created: 01.10.2023 20:45:14
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int maxOcc = 0;
    string max = "";
    unordered_map<string, int> occ;
    for (int i = 0; i < n - 1; i++) {
        string twoGram = s.substr(i, 2);
        occ[twoGram] ++;
        if (occ[twoGram] > maxOcc) {
            maxOcc = occ[twoGram];
            max = twoGram;
        }
    }
    cout << max;
    return 0;
}
