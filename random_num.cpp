#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "=============================\n";
    cout << "     NUMBER GUESSING GAME\n";
    cout << "=============================\n";
    cout << "I have chosen a number between 1 and 100.\n";

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secretNumber) {
            cout << "Entered number is High!\n";
        }
        else if (guess < secretNumber) {
            cout << "Entered number is Low!\n";
        }
        else {
            cout << "\nCongratulations! You won! \n";
            cout << "You guessed the number in "
                 << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}