#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    int m, s; cin >> m >> s;
    string min, max;
    int sMax=s;
    int x=9;
    if (s>m*9 || (s==0 && m>1)) {
        cout << "-1 -1";
        return 0;
    } else if (s==0 && m==1) {
        cout << "0 0";
        return 0;
    }
    while (sMax>0) {
        if (sMax-x>=0) {
            if (x!=0) max+= '0'+x;
            sMax-=x;
        } else {
            x--;
        }
    }
    min = max;
    if ((int) min.size() < m) {
        min[(int) min.size()-1]= (char) min[(int) min.size()-1]-1;
        int suf = (int) min.size();
        for (int i=0; i<m-suf-1; i++) {
            min+= '0';
        }
        if ((int) min.size() < m) min += '1';
    }
    reverse(min.begin(), min.end());
    int suf = (int) max.size();
    for (int i=0; i<m-suf; i++) {
        max+= '0';
    }
    cout << min << " " << max;
    return 0;
}
