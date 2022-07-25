#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int sum(int a[100], int s) {
    int ans=0;
    for (int i=0; i<s; i++) ans+=a[i];
    return ans;
}
 
int32_t main() {
    int n; cin >> n;
    int a[100];
    int max=0;

    for (int i=0; i<n; i++) cin >> a[i];

    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            int ai[100]; copy(begin(a), end(a), begin(ai));

            for (int k=i; k<=j; k++) ai[k] = 1-ai[k];
            int s=sum(ai,n);
            if (s>max) max = s;
        }
    }
    cout << max;
    return 0;
}
