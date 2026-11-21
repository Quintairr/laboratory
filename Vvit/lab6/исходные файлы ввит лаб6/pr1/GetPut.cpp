// Файл GetPut.cpp: ввод исходных данных и вывод результатов
#include <iostream>
#include <iomanip>
using namespace std;

void GetXY(double& x, double& y)
{
    cout << "Введите координаты точки x и y: ";
    cin >> x >> y;
}

void Put(bool result, double x, double y)
{
    cout << fixed << setprecision(2);
    cout << "Точка (" << x << "; " << y << ") ";
    if (result)
        cout << "попала в заданную область." << endl;
    else
        cout << "не попала в заданную область." << endl;
}
