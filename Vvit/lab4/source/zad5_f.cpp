// Лабораторная работа № 4 (Вариант № 5)
// Проект 5 (файл функции): определение функции
#include <cmath>
#define _USE_MATH_DEFINES
#include "math.h"

double func5(double x, double y)
{
    double b;
    b = cbrt((x + y) / (0.2 * x)) * sin(pow(tan(x), 2));
    return b;
}
