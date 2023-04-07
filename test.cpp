#include <iostream>
using namespace std;

int main() {
    int x = 10;

    if (x > 5) {
        cout << "x is greater than 5" << endl;
        for (int i = 0; i < x; i++) {
            cout << "i = " << i << endl;
            if (i % 2 == 0) {
                cout << "i is even" << endl;
                for (int j = 0; j < i; j++) {
                    cout << "  j = " << j << endl;
                    if (j % 2 == 0) {
                        cout << "  j is even" << endl;
                    } else {
                        cout << "j is " << endl;
                    }
                }
            } else {
                cout << "i is odd" << endl;
            }
        }
    } else {
        cout << "x is less than or equal to 5" << endl;
    }
    return 0;
}

