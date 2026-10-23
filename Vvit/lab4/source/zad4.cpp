// Лабораторная работа № 4 (Вариант № 5)
// Проект 4: Функция без параметров и без возвращаемого значения (использование глобальных переменных)
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include "math.h"

using namespace std;

void func4(void); // Прототип функции func4

// Глобальные переменные
double x, y, b;

int main()
{
    setlocale(LC_ALL, "rus");
    
    cout << "Ввод x = ";
    cin >> x;
    cout << endl << "Ввод y = ";
    cin >> y;
    
    func4(); // Вызов функции func4
    
    cout << endl << "При x = " << x << " и y = " << y << endl;
    cout << "результат b = " << b << endl;
    
    system("PAUSE");
    return 0;
}

// Определение функции func4
void func4()
{
    b = cbrt((x + y) / (0.2 * x)) * sin(pow(tan(x), 2));
}
