/**
 *    author:  evoPrg
 *    created: 12.11.2023 21:40:11
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map <int,bool> visited;
    vector<int> vec;
    int sol = n;
    for (int i = 1; i <= 400; i++) {
        for (int j = 2; j <= 5; j++) {
            long long val = pow(i, j);
            if(visited[val] != true && val <= n && val > 0) {
                sol --;
                visited[val] = true;
                vec.push_back(val);
            }
        }
    }
    cout << sol << endl;
    return 0;
}
