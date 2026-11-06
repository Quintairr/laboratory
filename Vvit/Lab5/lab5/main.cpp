#include <iostream>
#include <cstdlib>

#ifdef _WIN32
#include <windows.h>
#endif

// Прототипы вызываемых функций
void GetData(double&, double&, double&);
void CompLa(double, double, double, double&, double&, double&);
void PutLa(double, double, double);

int main()
{
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);
    #endif

    double a, b, c, La, Lb, Lc;
    GetData(a, b, c);
    CompLa(a, b, c, La, Lb, Lc);
    PutLa(La, Lb, Lc);

    #ifdef _WIN32
        system("PAUSE");
    #else
        std::cout << "Нажмите Enter для продолжения..." << std::endl;
        std::cin.get();
    #endif
    return 0;
}