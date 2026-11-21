// Файл Resh.cpp: три способа проверки принадлежности области
#include <cmath>

// Способ 1: вложенное ветвление и сложное логическое выражение
bool Resh1(double x, double y)
{
    if (std::fabs(x) <= 1.0 && std::fabs(y) <= 1.0)
    {
        if (std::fabs(x) + std::fabs(y) > 1.0)
            return true;
        else
            return false;
    }
    return false;
}

// Способ 2: вложенные ветвления только с операциями отношения
bool Resh2(double x, double y)
{
    if (x >= -1.0)
        if (x <= 1.0)
            if (y >= -1.0)
                if (y <= 1.0)
                    if (std::fabs(x) + std::fabs(y) > 1.0)
                        return true;
    return false;
}

// Способ 3: только сложное логическое выражение
bool Resh3(double x, double y)
{
    return (std::fabs(x) <= 1.0 && std::fabs(y) <= 1.0 &&
            std::fabs(x) + std::fabs(y) > 1.0);
}
