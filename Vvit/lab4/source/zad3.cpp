// Лабораторная работа № 4 (Вариант № 5)
// Проект 3: Функция с входными и выходными параметрами (без возвращаемого значения, по ссылке)
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include "math.h"

using namespace std;

// Прототип функции func3
void func3(double, double, double&);

int main()
{
    setlocale(LC_ALL, "rus");
    double x, y, b;
    
    cout << "Ввод x = ";
    cin >> x;
    cout << endl << "Ввод y = ";
    cin >> y;
    
    func3(x, y, b); // Вызов функции func3
    
    cout << endl << "При x = " << x << " и y = " << y << endl;
    cout << "результат b = " << b << endl;
    
    system("PAUSE");
    return 0;
}

// Определение функции func3
void func3(double x, double y, double& b)
{
    b = cbrt((x + y) / (0.2 * x)) * sin(pow(tan(x), 2));
}
