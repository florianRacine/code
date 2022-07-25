#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

bool isPalyndrom(string w) {
    if(w[0]==w[4] && w[1]==w[3]) {
        return true;
    }
    return false;
}

string addXtoS(string s, int x) {
    //convert x int hour and minutes
    int hx=x/60;
    int mx=x%60;
    int hs=stoi(s.substr(0,2));
    int ms=stoi(s.substr(3,2));
    int h, m;

    if (hx+hs<24) {
        h=hx+hs;
    } else {
        h=hx+hs-24;
    }

    if (mx+ms<60) {
        m=mx+ms;
    } else {
        m=mx+ms-60;
        if (h+1<24) {
            h++;
        } else {
            h=h-24+1;
        }
    }
    string clock = "";


    if (to_string(h).size()==1) {
        clock.append("0");
    }
    clock.append(to_string(h));
    clock.append(":");
    if (to_string(m).size()==1) {
        clock.append("0");
    }
    clock.append(to_string(m));
    
    return clock;
}
 
int32_t main() {
    int t; cin >> t;
    string s;
    int x;
    int count;
    for (int i=0; i<t; i++) {
        cin >> s >> x;
        string sF = s;
        count=0;
        do {
            if (isPalyndrom(sF)) {
                count++;
            }
            sF= addXtoS(sF,x);
            
        } while (sF!=s);
        cout << count << endl;
    }
    return 0;
}
