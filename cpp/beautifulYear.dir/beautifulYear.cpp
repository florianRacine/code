#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

bool distinct(string date) {
    for (int i=0; i<(int) date.size() - 1; i++) {
        for (int j=i+1; j<(int) date.size(); j++) {
            if (date[i] == date[j]) {
                return false;
            }
        }
    }
    return true;
}
 
int32_t main() {
    int date; 

    cin >> date;
    date++;

    while (not distinct(to_string(date))) {
        date++;
    }
    cout << date;
}
