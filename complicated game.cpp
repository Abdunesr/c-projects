
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator
    string word;
    vector string words ={ "apple", "banana", "cherry", "dragonfruit", "elderberry" };
    string word = words[rand() % words.size()]; // Select a random word from the vector
    int attempts = 6;
    string guessedLetters;
    string guessedWord(word.length(), '_');

    cout << "Welcome to Hangman!\n";
    cout << "Guess the word by entering one letter at a time.\n";

    while (attempts > 0 && guessedWord != word) {
        cout << "Guesses remaining: " << attempts << "\n";
        cout << "Guessed letters: " << guessedLetters << "\n";
        cout << "Current word: " << guessedWord << "\n";

        char guess;
        cout << "Enter your guess: ";
        cin >> guess;

        if (guessedLetters.find(guess) != string::npos) {
            cout << "You already guessed that letter. Try again.\n";
            continue;
        }

        guessedLetters += guess;

        if (word.find(guess) != string::npos) {
            for (int i = 0; i < word.length(); i++) {
                if (word[i] == guess) {
                    guessedWord[i] = guess;
                }
            }
        } else {
            cout << "Incorrect guess!\n";
            attempts--;
        }
    }

    if (guessedWord == word) {
        cout << "Congratulations! You guessed the word: " << word << "\n";
    } else {
        cout << "You ran out of attempts. The word was: " << word << "\n";
    }

    return 0;
}



