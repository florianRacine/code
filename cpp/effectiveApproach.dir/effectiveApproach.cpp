/**
 *    author:  evoPrg
 *    created: 06.02.2023 18:08:21
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int countVasya = 0, countPetya = 0;
    int iB = 0;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] == b[i]) {
                iB = j;
                break;
            }
        }
        countVasya += (iB + 1);
        countPetya += (n - iB);
    }
    cout << countVasya << " " << countPetya << "\n";
    return 0;
}
