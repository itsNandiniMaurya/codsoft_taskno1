/*number guessing game*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator with the current time
   srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int scc = 1+ (rand() % 100);

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Try to guess it." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > scc) {
            cout << "Too high! Try again." << endl;
        } else if (guess < scc) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << 
            endl;
        }
    } while (guess != scc);

    return 0;
}