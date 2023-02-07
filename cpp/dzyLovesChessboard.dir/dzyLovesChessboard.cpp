/**
 *    author:  evoPrg
 *    created: 07.02.2023 19:05:20
**/
#include <bits/stdc++.h>

using namespace std;

bool isWhiteAdjacent(vector<string> vec, int i, int j) {
    if (vec[i][j+1] == 'W' or vec[i][j-1] == 'W' or vec[i+1][j] == 'W' or vec[i-1][j] == 'W') {
        return true;
    } else {
        return false;
    }
}

bool isBlackAdjacent(vector<string> vec, int i, int j) {
    if (vec[i][j+1] == 'B' or vec[i][j-1] == 'B' or vec[i+1][j] == 'B' or vec[i-1][j] == 'B') {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> vec(n+2, "");
    string line(m+2, '-');
    vec[0] = line;
    vec[n+1] = line;
    for (int i = 1; i <= n; i++) {
        cin >> line;
        vec[i] = "-" + line + "-";
    }
    int change = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (vec[i][j] == '.') {
                if (change%2) {
                    if (not isWhiteAdjacent(vec, i, j)) {
                        vec[i][j] = 'W';
                        cout << "W";
                    } else {
                        vec[i][j] = 'B';
                        cout << "B";
                    }   
                } else {
                    if (not isBlackAdjacent(vec, i, j)) {
                        vec[i][j] = 'B';
                        cout << "B";
                    } else {
                        vec[i][j] = 'W';
                        cout << "W";
                    }
                }
            } else {
                for (int k = 
                cout << "-";
            }
        }
        change++;
        cout << endl;
    }


    return 0;
}
