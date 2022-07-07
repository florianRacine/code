#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

string allToUpper(string wordBrute) {
    string wordUpper;
    for (int i=0; i< (int) wordBrute.size(); i++) {
        wordUpper += (char) toupper(wordBrute[i]);
    }
    return wordUpper;
}

int compareLexicographically(string word1, string word2) {
    for (int i=0; i< (int) min(word1.size(),word2.size()); i++) {
        if(word1[i] < word2[i]) {
            return -1;
        }
        else if (word1[i] > word2[i]) {
            return 1;
        }
    }
    return 0;
}
 
int32_t main() {
    string word1, word2;
    cin >> word1 >> word2;
    word1 = allToUpper(word1);
    word2 = allToUpper(word2);
    cout << compareLexicographically(word1,word2);
    return 0;
}

