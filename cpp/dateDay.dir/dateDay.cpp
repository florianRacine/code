/**
 *    author:  evoPrg
 *    created: 29.08.2022 08:42:00
**/
#include <bits/stdc++.h>

using namespace std;

void printDay(int day) {
        switch (day) {
        case 0:
            cout << "Dimanche" << endl;
            break;
        case 1:
            cout << "Lundi" << endl;
            break;
        case 2:
            cout << "Mardi" << endl;
            break;
        case 3:
            cout << "Mercredi" << endl;
            break;
        case 4:
            cout << "Jeudi" << endl;
            break;
        case 5:
            cout << "Vendredi" << endl;
            break;
        case 6:
            cout << "Samedi" << endl;
            break;
    }
}

int main() {
    int M[12] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
    int j, m, a;
    cin >> j >> m >> a;
    int day = (j + (a - 1900) + (a - 1900)/4 + M[m-1]) % 7;
    printDay(day);
    return 0;
}
