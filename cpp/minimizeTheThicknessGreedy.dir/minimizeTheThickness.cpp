/**
 *    author:  evoPrg
 *    created: 25.10.2022 21:49:12
**/
#include <bits/stdc++.h>

using namespace std;

bool isSequence(vector<int> a, vector<pair<int,int>> s) {
    bool ans = true;
    int oldSum = 0;
    for(int i = 0; i < (int) s.size(); i++) {
        int sum = 0;
        for (int j = s[i].first; j <= s[i].second; j++) {
            sum += a[j];
        }
        if (oldSum != sum and i != 0) {
            ans = false;
        }
        oldSum = sum;
    }
    return ans;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<pair<int,int>> s; //Tableau dynamique de couples d'indices pour les splits
    int thickness = n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.push_back(make_pair(i,i));
    }
    for (int i = 0; i < n; i++) {
        if (isSequence(a, s) == true) {
            int m = s[0].second - s[0].first + 1;
            for (int j = 1; j < (int) s.size(); j++) {
               if (m < s[j].second - s[j].first + 1) {
                   m = s[j].second - s[j].first + 1;
               }
            }
            //cout << "m = " << m << endl;
            thickness = min(thickness, m);
            cout << thickness;
            return ;
        } else {
            int iMin = 0;
            int sMin = 0;
            for (int j = s[0].first; j <= s[0].second; j++) {
                sMin += a[j];
            }
            for (int j = 0; j < (int) s.size(); j++) {
                int sum = 0;
                for (int k = s[j].first; k <= s[j].second; k++) {
                    sum += a[k];
                }
                if (sMin > sum) {
                    sMin = sum;
                    iMin = j;
                }
            }
            if (iMin == (int) s.size() - 1) {
                s[(int) s.size() - 2].second = s[(int) s.size() - 1].second;
                s.pop_back();
            } else if (iMin == 0) {
                s[1].first = s[0].first;
                s.erase(s.begin());
            } else {
                int v1 = 0, v2 = 0;
                for (int j = s[iMin-1].first; j <= s[iMin-1].second; j++) {
                    v1 += a[j];
                }
                for (int j = s[iMin+1].first; j <= s[iMin+1].second; j++) {
                    v2 += a[j];
                }
                if (v1 < v2) {
                    s[iMin-1].second = s[iMin].second;
                } else {
                    s[iMin+1].first = s[iMin].first;
                }
                s.erase(s.begin() + iMin);
            }
            //for (int j = 0; j < (int) s.size(); j++) {
            //    cout << s[j].first << " " << s[j].second << endl;
            //}
            //cout << "s.size() = " << (int) s.size() << endl;
            //cout << "Thickness = " << thickness << endl;
        }
    }
}

int main() {
    int tt; cin >> tt;
    while (tt--) {
        solve();
        cout << endl;
    }
    return 0;
}
