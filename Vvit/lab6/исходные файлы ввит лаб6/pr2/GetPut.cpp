// Файл GetPut.cpp: ввод данных, выбор способа и вывод результата
#include <iostream>
#include <iomanip>
using namespace std;

void GetData(double& x, double& y, double& z, double& a, double& b)
{
    cout << "Введите x, y, z, a, b: ";
    cin >> x >> y >> z >> a >> b;
}

int GetMethod()
{
    int method;
    cout << "Способ решения (1 - без min/max, 2 - с minMy/maxMy): ";
    cin >> method;
    return method;
}

void PutResult(double g, int branch, int method)
{
    cout << fixed << setprecision(6);
    cout << "Способ решения: " << method << endl;
    cout << "Номер выполненной ветви: " << branch << endl;
    cout << "Значение g = " << g << endl;
}

void PutError()
{
    cout << "Ошибка: выберите способ 1 или 2." << endl;
}
