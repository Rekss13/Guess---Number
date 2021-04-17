#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;

int main(){
    setlocale(LC_CTYPE, "rus");
    cout << "\tДобро пожаловать в Угадай Число\n\n";
    
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int tries = 0;
    int guess;

    do{
        cout << "Введите число: ";
        cin >> guess;
        if (guess > secretNumber)
            cout << "Слишком много!\n\n";
        else if (guess < secretNumber)
            cout << "Слишком мало!\n\n";
        ++tries;
    } while (guess != secretNumber);

    cout << "\nПоздравляю! У Вас получилось за " << tries << " попыток!\n";

    return 0;
}