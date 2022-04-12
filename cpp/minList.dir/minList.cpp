#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int mini(int t[], int n) {
    int m = t[0];
    for (int i = 0; i < n; i++) {
        if (m > t[i]) {
            m = t[i];
        }
    }
    return m;
}

void output(int t[7],int max) {
    for (int i = 0; i < max; i++) {
        std::cout << t[i] << " ";
    }
    std::cout << std::endl;
}

int g() {
    vector<int> t;
    int max = 0;
    int x;
    while (cin >> x) {
        t.push_back(x);
        max++;
    }
    return t;
}
 
int32_t main() {
    int* t;
    t = int g);
    output(t,7);
    
    //int m = mini(t,6);
    //std::cout << "min = " << m << std::endl;
}
