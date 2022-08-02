#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    int n; cin >> n;
    int a, m, q;
    vector<pair<int,int>> A; A.push_back({0,0});
    for (int i=0; i<n; i++) {
        cin >> a;
        A.push_back({A[i].second+1,A[i].second+a});
    }
    cin >> m;
    for (int i=0; i<m; i++) {
        cin >> q;
        int iMin=0, iMax=(int) A.size(), iMoy=(iMin+iMax)/2;
        while (!(q>=A[iMoy].first && q<=A[iMoy].second)) {
            if (q<A[iMoy].first) {
                iMax=iMoy;
            } else if (q>A[iMoy].second) {
                iMin=iMoy;
            }
            iMoy=(iMin+iMax)/2;
        }
        cout << iMoy << endl;
    }
    return 0;
}
