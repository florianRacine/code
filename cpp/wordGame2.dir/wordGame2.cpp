/**
 *    author:  evoPrg
 *    created: 24.10.2022 23:09:16
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
	map<string, int> mp;
	string a[3][n];
	for (int i = 0; i < 3; i++) {
	    for (int j = 0; j < n; j++) {
		cin >> a[i][j];
		mp[a[i][j]]++;
	    }
	}
	for (int i = 0; i < 3; i++) {
	    int tot = 0;
	    for (int j = 0; j < n; j++) {
		if (mp[a[i][j]] == 1) {tot += 3;}
		else if (mp[a[i][j]] == 2) {tot++;}
	    }
	    cout << tot << ' ';
	}
	cout << '\n';
    }
    return 0;
}
