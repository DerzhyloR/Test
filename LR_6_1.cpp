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
    cout << "Enter namber= ";
    cin >> chyslo;
    cout << "Enter second namber= ";
    cin >> secondchyslo;
    cout << "\n������ ������ ����� " << chyslo << " = " << modul(chyslo);
    cout << "\n������ ������� ����� " << secondchyslo << " = " << modul(secondchyslo)<<"\n";

}

