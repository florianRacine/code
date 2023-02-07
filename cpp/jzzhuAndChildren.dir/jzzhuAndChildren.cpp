/**
 *    author:  evoPrg
 *    created: 07.02.2023 14:39:23
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    deque<vector<int>> a;
    vector<int> aiAndI(2);
    int ai;
    for (int i = 0; i < n; i++) {
        cin >> ai;
        aiAndI[0] = ai;
        aiAndI[1] = i+1;
        a.push_back(aiAndI);
    }
    while ((int) a.size() > 1) {
        aiAndI = a.front();
        a.pop_front();
        if (aiAndI[0] > m) {
            aiAndI[0] -= m;
            a.push_back(aiAndI);
        }
    }
    aiAndI = a.front();
    cout << aiAndI[1];
    return 0;
}
