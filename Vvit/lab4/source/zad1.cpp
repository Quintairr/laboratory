// Проект 1: Функция с входными параметрами и возвращаемым значением (определение в начале)
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include "math.h"

using namespace std;

// Определение функции func1
double func1(double x, double y)
{
    double b;
    b = cbrt((x + y) / (0.2 * x)) * sin(pow(tan(x), 2));
    return b;
}

int main()
{
    // setlocale(LC_ALL, "rus");
    double x, y, b;

    cout << "Ввод x = ";
    cin >> x;
    cout << endl << "Ввод y = ";
    cin >> y;

    b = func1(x, y); // Вызов функции func1

    cout << endl << "При x = " << x << " и y = " << y << endl;
    cout << "результат b = " << b << endl;

    system("PAUSE");
    return 0;
}
