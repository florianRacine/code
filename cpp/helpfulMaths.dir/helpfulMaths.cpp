#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;


void printSum(int arrElement[], int size) {
    for (int i=0; i<size; i++) {
        cout << arrElement[i];
        if (i != size-1) {
            cout << "+";
        }
    }
}
 
int32_t main() {
    string firstSum;
    string element;
    int countElement = 0;
    int arrElement[51];
    int intElement;

    cin >> firstSum;
    for (int i=0; i<(int) firstSum.size(); i++) {
        element = firstSum[i];
        if (element != "+") {
            intElement = stoi(element);
            arrElement[countElement] = intElement;
            countElement++;
        }
    }
    sort(arrElement, arrElement + countElement);
    printSum(arrElement,countElement);
}
