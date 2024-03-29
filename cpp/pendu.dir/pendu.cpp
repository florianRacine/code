#include <iostream>
#include </home/evo/Documents/code/cpp/pendu.dir/pendu.h>
 
using namespace std;
typedef long long ll;

int main() {
    // Initialisation
    string wordToFind = setWordToFind();
    int score = 0, countLettersFund = 0, scoreLim = 10;
    int sizeOfWordToFind = (int) wordToFind.size();
    vector<bool> lettersFound(sizeOfWordToFind);
    printStartGame();
    // Main loop
    while (!isWordFind(wordToFind, lettersFound) && score < scoreLim) {
        printAskLetterGuess();
        int letter = getLetterGuess();
        lettersFound = setLetterFind(letter, wordToFind, lettersFound);
        printWordWithLettersFound(wordToFind, lettersFound);
        if (countLettersFund == countingLettersFund(lettersFound)) {
            score++;
        }
        countLettersFund = countingLettersFund(lettersFound);
    }
    printScore(score, wordToFind);
    return 0;
}
