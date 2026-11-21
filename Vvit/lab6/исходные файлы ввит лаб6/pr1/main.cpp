// Файл main.cpp: главная функция проекта pr1
#include <iostream>
using namespace std;

void GetXY(double&, double&);
void Put(bool, double, double);
bool Resh1(double, double);
bool Resh2(double, double);
bool Resh3(double, double);

int main()
{
    double x, y;
    bool result;

    GetXY(x, y);

    cout << "\nРешение 1-й функции:" << endl;
    result = Resh1(x, y);
    Put(result, x, y);

    cout << "\nРешение 2-й функции:" << endl;
    result = Resh2(x, y);
    Put(result, x, y);

    cout << "\nРешение 3-й функции:" << endl;
    result = Resh3(x, y);
    Put(result, x, y);

    return 0;
}
