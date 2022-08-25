/**
 *    author:  evoPrg
 *    created: 20.08.2022 02:47:56
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int count = 0, newCandles = a, oldCandles = 0;
    while (newCandles) {
        // Use
        count += newCandles;
        oldCandles += newCandles;
        newCandles = 0;
        // Create
        newCandles += oldCandles/b;
        oldCandles -= (oldCandles/b)*b;
    }
    cout << count;
    return 0;
}
