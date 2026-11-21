// Файл Razv.cpp: два алгоритма и вспомогательные функции minMy/maxMy
#include <cmath>

// Способ 1: базовые алгоритмы поиска максимума и минимума
// без вспомогательных функций min и max.
double Razv(double x, double y, double z, double a, double b, int& n)
{
    double g;

    if (y > 0.0)
    {
        if (x * y * y > 0.0)
        {
            n = 1;
            double v1 = y * y * y;
            double v2 = std::sqrt(1.0 + (z * x) * (z * x));
            if (v1 > v2)
                g = v1;
            else
                g = v2;
        }
        else
        {
            n = 2;
            double maxYZ;
            if (y > z)
                maxYZ = y;
            else
                maxYZ = z;

            double ax = a + x;
            if (ax < maxYZ)
                g = ax;
            else
                g = maxYZ;
        }
    }
    else
    {
        n = 3;
        g = -b * std::exp(y);
    }

    return g;
}

// Вспомогательная функция нахождения большего из двух чисел.
double maxMy(double p, double q)
{
    if (p > q)
        return p;
    return q;
}

// Вспомогательная функция нахождения меньшего из двух чисел.
double minMy(double p, double q)
{
    if (p < q)
        return p;
    return q;
}

// Способ 2: применение собственных функций maxMy и minMy.
double Razm(double x, double y, double z, double a, double b, int& n)
{
    if (y > 0.0)
    {
        if (x * y * y > 0.0)
        {
            n = 1;
            double v1 = y * y * y;
            double v2 = std::sqrt(1.0 + (z * x) * (z * x));
            return maxMy(v1, v2);
        }
        else
        {
            n = 2;
            return minMy(a + x, maxMy(y, z));
        }
    }

    n = 3;
    return -b * std::exp(y);
}
