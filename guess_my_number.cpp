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
    int min = 1;
    int max = 100;

    cout << "--------------------------------------------------\n\n";

    do{
        cout << "Введите число (от " << min << " до " << max << "): ";
        cin >> guess;
        if (guess > secretNumber) {
            cout << "Слишком много!\n\n";
            if (guess <= max) max = guess - 1;
        }
        else if (guess < secretNumber) {
            cout << "Слишком мало!\n\n";
            if (guess >= min) min = guess + 1;
        }
        ++tries;
    } while (guess != secretNumber);

    cout << "\n--------------------------------------------------\n\n";
    cout << "Поздравляю! У Вас получилось за " << tries << " попыток!\n\n";
    cout << "\tИГРА ОКОНЧЕНА\n";

    return 0;
}