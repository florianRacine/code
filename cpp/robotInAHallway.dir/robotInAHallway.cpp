/**
 *    author:  evoPrg
 *    created: 04.08.2022 17:08:36
**/
#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int m; cin >> m;
        vector<int> a1(m);
        vector<int> a2(m);
        for (int i=0; i<m; i++) {
            cin >> a1[i];
        }
        for (int i=0; i<m; i++) {
            cin >> a2[i];
        }
        int count1=0, count2=0, count3=0;
        //Case 1:
        for (int i=0; i<m-1; i++) {
            if (count1 < a1[i+1]) {
                count1+=a1[i+1]-count1+1;
            } else {
                count1++;
            }
        }
        if(count1 < a2[m-1]) {
            count1+=a2[m-1]-count1+1;
        } else {
            count1++;
        }
        for (int i=m-1; i>0; i--) {
            if (count1 < a2[i-1]) {
                count1+=a2[i-1]-count1+1;
            } else {
                count1++;
            }
        }
        //Case 2:
        if(count2 < a2[0]) {
            count2+=a2[0]-count2+1;
        } else {
            count2++;
        }
        for (int i=0; i<m-1; i++) {
            if (count2 < a2[i+1]) {
                count2+=a2[i+1]-count2+1;
            } else {
                count2++;
            }
        }
        if(count2 < a1[m-1]) {
            count2+=a1[m-1]-count2+1;
        } else {
            count2++;
        }
        for (int i=m-1; i>1; i--) {
            if (count2 < a2[i-1]) {
                count2+=a2[i-1]-count2+1;
            } else {
                count2++;
            }
        }
        //Case 3:
        for (int i=0; i<m; i++) {
            if(i%2==0) {
                if (count3 < a2[i]) {
                    count3+=a2[i]-count3+1;
                } else {
                    count3++;
                }
                if (i!=m-1) {
                    if (count3 < a2[i+1]) {
                        count3+=a2[i+1]-count3+1;
                    } else {
                        count3++;
                    }   
                }
            } else {
                if (count3 < a1[i]) {
                    count3+=a1[i]-count3+1;
                } else {
                    count3++;
                }
                if (i!= m-1) {
                    if (count3 < a1[i+1]) {
                        count3+=a1[i+1]-count3+1;
                    } else {
                        count3++;
                    }   
                }
            }
        }
        cout << min(min(count1, count2),min(count2, count3)) << endl;
    }
    return 0;
}
