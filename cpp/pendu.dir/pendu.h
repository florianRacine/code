#include <bits/stdc++.h>

using namespace std;

char getLetterGuess() {
    char letterGuess;
    cin >> letterGuess;
    return letterGuess;
}

string setWordToFind() {
    string wordToFind;
    ifstream baseWords;
    baseWords.open("baseWords.txt");
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> uni(0,297);
    auto random_integer = uni(rng);
    for (int i = 0; i < random_integer; i++) {
        baseWords >> wordToFind;
    }
    baseWords.close();
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
            cout << '_';
        }
        cout << " ";
    }
    cout << endl;
}

void printScore(int score, string wordToFind) {
    cout << "Votre score est de " << score << " points." << endl;
    cout << "Le mot était : " << wordToFind << "." << endl;
    if (score < 6) {
        cout << "Well done !!";
    } else {
        cout << "Game over !!";
    }
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

int countingLettersFund(vector<bool> vec) {
    int size = (int) vec.size();
    int count = 0;
    for (int i = 0; i < size; i++) {
        count += vec[i];
    }
    return count;
}
