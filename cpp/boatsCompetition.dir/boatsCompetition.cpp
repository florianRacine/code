/**
 *    author:  evoPrg
 *    created: 06.08.2022 23:03:17
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        vector<int> occW(n+n+2);
        vector<int> w(n);
        for (int i = 0; i < n; i++) {
            cin >> w[i];
        }
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                occW[w[i]+w[j]]++;
            }
        }
        //search max(occW)
        int max=0, iMax=0;
        for (int i = 0; i<(int) occW.size(); i++) {
            if (occW[i] >= max) {
                max = occW[i];
                iMax = i;
            }
        }
        int count = 0;
        vector<bool> alreadyTaken(n);
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if (w[i]+w[j] == iMax && !alreadyTaken[i] && !alreadyTaken[j]) {
                    alreadyTaken[i] = 1;
                    alreadyTaken[j] = 1;
                    count++;
                }
            }
        }       
        cout << count << endl;
    }
    return 0;
}
