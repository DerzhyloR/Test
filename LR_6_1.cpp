#include <iostream>
#include <Windows.h>
using namespace std;

template <typename Type>
Type modul(Type x) {
    return (x < 0) ? x * (-1) : x;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int chyslo;
    double secondchyslo;
    cout << "Введіть ціле число: ";
    cin >> chyslo;
    cout << "Введіть дійсне число: ";
    cin >> secondchyslo;
    cout << "\nМодуль цілого числа " << chyslo << " = " << modul(chyslo);
    cout << "\nМодуль дійсного числа " << secondchyslo << " = " << modul(secondchyslo)<<"\n";

}

