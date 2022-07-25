#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int countD(string w) {
    int count=0;
    for (int i=0; i<8; i++) {
        if(w[i]=='#') count++;
    }
    return count;
}

int positionD(string w) {
    int x=0;
    for (int i=0; i<8; i++) {
        if(w[i]=='#') {
            x = i+1;
            return x;
        }
    }
    return -1;
}
 
int32_t main() {
    int t; cin >> t;
    string line;
    int count, oldCount;
    bool alreadyFind;
    for (int i=0; i<t; i++) {
        oldCount = 1;
        count = 1;
        alreadyFind=false;
        for (int j=1; j<=8; j++) {
            cin >> line;
            count=countD(line);
            if (oldCount==2 && count==1 && alreadyFind==false) {
                cout << j << " " << positionD(line);
                if (i!=t-1) {
                    cout << endl;
                }
                alreadyFind=true;
            }
            oldCount = count;
        }
    }
    return 0;
}
