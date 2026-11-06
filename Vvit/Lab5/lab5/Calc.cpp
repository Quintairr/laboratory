#include <cmath>

double Bisect(double, double, double);

// Определение функции CompLa для вычисления трех биссектрис
void CompLa(double a, double b, double c, double& La, double& Lb, double& Lc)
{
    La = Bisect(a, b, c);
    Lb = Bisect(b, a, c);
    Lc = Bisect(c, a, b);
}

// Определение функции Bisect для вычисления биссектрисы угла
// a - противолежащая сторона, b и c - прилежащие стороны
double Bisect(double a, double b, double c)
{
    double num = b*c*(pow(b+c, 2) - a*a);
    if (num < 0) {
        return 0; // Защита от некорректных данных
    }
    return sqrt(num) / (b + c);
}