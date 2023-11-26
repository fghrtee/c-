#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

vector<string> words = {"programming", "hangman", "computer", "algorithm", "cplusplus", "developer", "coding"};

string getRandomWord() {
    srand(static_cast<unsigned int>(time(0)));
    return words[rand() % words.size()];
}

bool isWordGuessed(const string& word, const vector<bool>& guessed) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (!guessed[i]) {
            return false;
        }
    }
    return true;
}

void displayWord(const string& word, const vector<bool>& guessed) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (guessed[i]) {
            cout << word[i] << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

int main() {
    string wordToGuess = getRandomWord();
    vector<bool> guessed(wordToGuess.length(), false);
    int maxAttempts = 6;
    int incorrectAttempts = 0;

    cout << "Welcome to Hangman!" << endl;
    
    cout<<wordToGuess;
    while (incorrectAttempts < maxAttempts && !isWordGuessed(wordToGuess, guessed)) {
        cout << "\nAttempts remaining: " << maxAttempts - incorrectAttempts << endl;
        displayWord(wordToGuess, guessed);

        cout << "Enter a letter: ";
        char guess;
        cin >> guess;

        bool found = false;
        for (size_t i = 0; i < wordToGuess.length(); ++i) {
            if (wordToGuess[i] == guess) {
                guessed[i] = true;
                found = true;
            }
        }

        if (!found) {
            ++incorrectAttempts;
            cout << "Incorrect guess! Try again." << endl;
        }
    }
   
    if (isWordGuessed(wordToGuess, guessed)) {
        cout << "\nCongratulations! You guessed the word: " << wordToGuess << endl;
    } else {
        cout << "\nSorry, you ran out of attempts. The word was: " << wordToGuess << endl;
    }

    return 0;
}
