/**
 *    author:  evoPrg
 *    created: 02.02.2023 14:52:12
**/
#include <bits/stdc++.h>

using namespace std;

int iMax(vector<int> vec) {
    int iMax = 0;
    int max = vec[0];
    for (int i = 0; i < (int) vec.size(); i++) {
        if (vec[i] > max) {
            iMax = i;
            max = vec[i];
        }
    }
    return iMax;
}

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<vector<int>> p;
        for (int i = 0; i < n; i++) {
            vector<int> pi(n-1);
            for (int j = 0; j < n - 1; j++) {
                cin >> pi[j];
            }
            p.push_back(pi);
        }
        vector<int> occ(n);
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n; j++) {
                // Plus de poids pour ceux qui arrivent en premiers
                occ[p[j][i]-1] += n - i;
            }
            int m = iMax(occ) + 1;
            cout << m << " ";
            occ[m - 1] = 0;
        }
        int m = iMax(occ) + 1;
        cout << m << " ";
        cout << endl;
    }
    return 0;
}
