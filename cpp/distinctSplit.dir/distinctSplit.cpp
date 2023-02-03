/**
 *    author:  evoPrg
 *    created: 03.02.2023 16:25:00
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; 
        int curMaxA = 0, curMaxB = 0;
        int maxA, maxB;
        unordered_map<char, int> mA, mB;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++) {
            if (!mB.count(s[i])  or mB[s[i]] == 0) {
                curMaxB++;
                mB[s[i]] = 0;
            }
            mB[s[i]]++;
        }
        maxB = curMaxB;
        maxA = 0;
        for (int i = 0; i < n; i++) {
            mB[s[i]]--;
            if (!mA.count(s[i]) or mA[s[i]] == 0) {
                curMaxA++;
                mA[s[i]] = 0;
            }
            if (!mB.count(s[i]) or mB[s[i]] == 0) {
                curMaxB--;
            }
            mA[s[i]]++;
            if (curMaxA + curMaxB > maxA + maxB) {
                maxA = curMaxA;
                maxB = curMaxB;
            }
        }
        cout << maxA + maxB << endl;
    }
    return 0;
}
