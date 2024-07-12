#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int attempts = 0;
    int guess;
    srand(time(0)); 
    int secretNumber = rand() % 100 + 1; 
    cout << "Welcome to the Number Guessing Game" << endl;
    cout << "Guess a number between 1 and 100: " << endl;
    
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts!" << endl;
            break;
        } else if (guess < secretNumber - 10) {
            cout << "Too low! Try again: " << endl;
        } else if (guess < secretNumber) {
            cout << "A little low! Try again: " << endl;
        } else if (guess > secretNumber + 10) {    
            cout << "Too high! Try again: " << endl;    
        } else {
            cout << "A little high! Try again: " << endl;
        }
    }

    return 0;
}