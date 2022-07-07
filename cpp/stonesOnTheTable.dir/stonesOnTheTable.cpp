#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n;
    int j=0;
    string row, newRow;

    cin >> n >> row;
    newRow += row[0];


    for (int i=1; i<(int) row.size(); i++ ) {
        if (row[i] != newRow[j]) {
            newRow += row[i];
            j++;
        }
    }
    cout << (int) row.size() - (int) newRow.size() << endl;
    return 0;
}
