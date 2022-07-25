#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int t; cin >> t;
    for (int i=0; i<t; i++) {
        int n; cin >> n;
        int arr[50] = {0};
        for (int j=0; j<n; j++) {
            cin >> arr[j];
        }
        sort(arr,arr+50);
        int j=0;
        int countDistinct=0;
        int countOcc=0;
        while (j<50-1) {
            if (arr[j] != arr[j+1] && arr[j] != 0 && arr[j+1] != 0) countDistinct++;
            else if (arr[j] == arr[j+1] && arr[j] != 0 && arr[j+1] != 0) countOcc++;
             //cout << "arr[j] = " << arr[j] << endl;
            j++;
        }
        if (countOcc%2==0) {
            cout << countDistinct+1 << endl;
        } else {
            cout << countDistinct << endl;
        }
    }
}
