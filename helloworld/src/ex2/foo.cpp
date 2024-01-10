#include "foo.h"
#include <iostream>
using namespace std;

int foo() {
    int userInput;
    cout << "Введите число: ";
    cin >> userInput;
    return userInput * 2; // Возвращаем удвоенное значение введенного числа
}
