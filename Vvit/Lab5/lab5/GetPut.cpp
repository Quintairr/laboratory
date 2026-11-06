#include <iostream>
#include <clocale>

using namespace std;

// Определение функции ввода сторон треугольника a, b, c
void GetData(double& a, double& b, double& c)
{
    setlocale(LC_ALL, "rus");
    cout << "Введите длины сторон треугольника a, b, c: ";
    cin >> a >> b >> c;
}

// Определение функции вывода биссектрис La, Lb, Lc
void PutLa(double La, double Lb, double Lc)
{
    setlocale(LC_ALL, "rus");
    cout << "Биссектриса La = " << La << endl;
    cout << "Биссектриса Lb = " << Lb << endl;
    cout << "Биссектриса Lc = " << Lc << endl;
}