#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int32_t main() {
    const int BEGIN_LETTER = 97; // (char) BEGIN_LETTER = "a"
    int occurenceLetter[26] = {0}; // {0,0,...,0}
    int countDiffLetter = 0;
    string word;
    
    cin >> word;

    // Find the number of occurence for each letter
    for (int i=0; i<(int) word.size(); i++) {
        occurenceLetter[(int) word[i]-BEGIN_LETTER] += word[i];
    }

    // Find number of distinct letter
    for (int i=0; i<26; i++) {
        if (occurenceLetter[i] > 0) {
            countDiffLetter++;
        }
    }

    if (countDiffLetter % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
