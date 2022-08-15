/**
 *    author:  evoPrg
 *    created: 07.08.2022 00:03:59
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        string s; cin >> s;
        vector<int> lenSubFromI((int) s.size()-2);
        for (int i = 0; i < (int) s.size()-2; i++) {
            bool a = false, b = false, c = false;
            int j = i;
            while ((!a || !b || !c) && j < (int) s.size()) {
                if (!a && s[j] == '1') a = true;
                else if (!b && s[j] == '2') b = true;
                else if (!c && s[j] == '3') c = true;
                j++;
            }
            if (a && b && c) lenSubFromI[i]=j-i;
            else lenSubFromI[i]=-1;
        }
        int min = (int) s.size();
        int count=0;
        for (int i = 0; i < (int) s.size()-2; i++) {
            if (lenSubFromI[i] < min && lenSubFromI[i] >= 3) {
                min = lenSubFromI[i];
            } else if (lenSubFromI[i] == -1) {
                count++;
            }
        }
        if (count == (int) s.size()-2) min = 0;
        cout << min << endl;
    }
    return 0;
}
