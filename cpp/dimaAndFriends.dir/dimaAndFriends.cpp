/**
 *    author:  evoPrg
 *    created: 07.02.2023 14:09:33
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    int sum = 0, count = 0;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        sum += vec[i];
    }
    for (int i = 1; i <= 5; i++) {
        if ((sum+i)%(n+1) != 1) {
            count ++;
        }
    }
    cout << count;
    return 0;
}
