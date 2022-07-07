#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    int n, t;
    int j = 0;
    string queue;
    string boy("B"), girl("G");

    cin >> n >> t >> queue;

    for (int i=0; i<t; i++) {
        while (j< (int) queue.length()) {
            if (queue[j] == boy[0] && queue[j+1] == girl[0]) {
                queue[j] = girl[0];
                queue[j+1] = boy[0];
                j+=2;
            } else {
                j++;
            }
        }
        j=0;
    }
    cout << queue;
    return 0;
}
