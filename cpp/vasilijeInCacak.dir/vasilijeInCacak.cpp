#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        long long n, k, x;
        cin >> n >> k >> x;
        bool ans = ((k*(k+1) <= 2*x) && (k*(2*n - k + 1) >= 2*x));
        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
