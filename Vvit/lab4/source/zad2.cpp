// Проект 2: Функция с входными параметрами и возвращаемым значением (определение после main)
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include "math.h"

using namespace std;

// Прототип функции func2
double func2(double, double);

int main()
{
    setlocale(LC_ALL, "rus");
    double x, y, b;

    cout << "Ввод x = ";
    cin >> x;
    cout << endl << "Ввод y = ";
    cin >> y;

    b = func2(x, y); // Вызов функции func2

    cout << endl << "При x = " << x << " и y = " << y << endl;
    cout << "результат b = " << b << endl;

    system("PAUSE");
    return 0;
}

// Определение функции func2
double func2(double x, double y)
{
    double b;
    b = cbrt((x + y) / (0.2 * x)) * sin(pow(tan(x), 2));
    return b;
}
