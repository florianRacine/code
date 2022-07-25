#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    //Length, sum of digits
    int m, s; cin >> m >> s;
    string min, max;
    int n=s/9;

    //Min
    if (m*9>=s && not(m>1 && s==0)) {
        if (((s/9)+1<m || ((s/9)<m && s%9==0)) && s!=0) {
            min += "1";
            for (int i=0; i<m-(n+1)-1; i++) min+="0";
        }


        if (s%9 && (s/9)+1<m) min += to_string(s%9-1);
        else if (s%9 && (s/9)+1==m) min += to_string(s%9);
        else if (s%9==0 && m>=2 && s!=0) n--,min += "8";
        for (int i=0; i<n; i++) min += '9';
        if (min.size()==0) min += '0';
    } else min="-1";

    //Max
    
    if (m*9>=s && not(m>1 && s==0)) {
        
    } else max="-1";
    
    cout << min << " " << max;
}
