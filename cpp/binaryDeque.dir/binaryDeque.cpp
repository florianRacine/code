#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int sum(int arr[], int size) {
    int count=0;
    for (int i=0; i<size; i++) {
        count += arr[i];
    }
    return count;
}

 
int32_t main() {
    int t; cin >> t;
    int n, s;
    for (int i=0; i<t; i++) {
        cin >> n >> s;
        int arr[200000]={0};
        for (int j=0; j<n; j++) {
            cin >> arr[j];
        }
    }
    return 0;
}
