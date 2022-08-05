/**
 *    author:  evoPrg
 *    created: 05.08.2022 23:56:58
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string n; cin >> n;
        int count=0;
        for (int i=0; i<(int) n.size(); i++) {
            if (n[i] != '0') count++;
        }
        cout << count << endl;
        for (int i=1; i<=(int) n.size(); i++) {
            int dig = (n[(int) n.size()-i]-'0')*pow(10,i-1);
            if (dig!= 0) {
                cout << dig;
                if (i!=(int) n.size()) cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
