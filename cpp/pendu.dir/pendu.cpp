#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;

char getLetterGuess() {
    char letterGuess;
    cin >> letterGuess;
    return letterGuess;
}

string setWordToFind() {
    string wordToFind;
    wordToFind = "joker";
    return wordToFind;
}

vector<bool> setLetterFind(char letter, string wordToFind, vector<bool> lettersFound) {
    int sizeOfWordToFind = (int) wordToFind.size();
    for (int i=0; i<sizeOfWordToFind; i++) {
        if (wordToFind[i] == letter && lettersFound[i] != true) {
            lettersFound[i] = true;
        }
    }
    return lettersFound;
}

void printWordWithLettersFound(string wordToFind, vector<bool> lettersFound) {
    int sizeOfWordToFind = (int) wordToFind.size();
    for (int i=0; i<sizeOfWordToFind; i++) {
        if (lettersFound[i] == true) {
            cout << (char) wordToFind[i];
        } else {
            cout << _';
        }
        cout << " ";
    }
    cout << endl;
}

void printScore(int score) {
    cout << "Votre score est de " << score << " points." << endl;
}

void printAskLetterGuess() {
    cout << "Try a letter : " << endl;
}

void printStartGame() {
    cout << "Try to find the mistery word or die !" << endl;
}

int isWordFind (string wordToFind, vector<bool> lettersFound) {
    int sizeOfWordToFind = (int) wordToFind.size();
    int count = 0;
    for (int i=0; i<sizeOfWordToFind; i++) {
        if (lettersFound[i] == true) {
            count++;
        }
    }
    if (count == sizeOfWordToFind) {
        return true;
    } else {
        return false;
    }
}
 
int main() {
    // Initialisation
    string wordToFind = setWordToFind();
    int sizeOfWordToFind = (int) wordToFind.size();
    vector<bool> lettersFound(sizeOfWordToFind);
    int score = 0;
    printStartGame();

    // Main loop
    while (!isWordFind(wordToFind, lettersFound) && score < 6) {
        printAskLetterGuess();
        int letter = getLetterGuess();
        lettersFound = setLetterFind(letter, wordToFind, lettersFound);
        printWordWithLettersFound(wordToFind, lettersFound);
        
        score++;
    }
    printScore(score);
    if (score < 6) {
        cout << "Well done !!";
    } else {
        cout << "Game over !!";
    }
    return 0;
}
