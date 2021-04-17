#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "\tWelcom to Guess My Number\n\n";
    
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int tries = 0;
    int guess;

    do{
        cout << "Enter a guess: ";
        cin >> guess;
        if (guess > secretNumber)
            cout << "Too high!\n\n";
        else if (guess < secretNumber)
            cout << "Too low!\n\n";
        ++tries;
    } while (guess != secretNumber);

    cout << "\nThat's it! You got it in " << tries << " guesses!\n";

    return 0;
}