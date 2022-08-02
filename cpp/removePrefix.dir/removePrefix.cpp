#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int t; cin >> t;
    for (int i=0; i<t; ++i) {
        int n; cin >> n;
        int a;
        int pos=0;
        set<int> alreadyVisited;
        vector<int> vec;

        for (int j=0; j<n; ++j) {
            cin >> a;
            vec.push_back(a);
        }

        for (int j=n-1; j>=0; --j) {
            a=vec[j];
            if (alreadyVisited.count(a)) {
                pos=j+1;
                j=-1;
            } else {
                alreadyVisited.insert(a);
            }
        }
        cout << pos << endl;
    }
    return 0;
}
