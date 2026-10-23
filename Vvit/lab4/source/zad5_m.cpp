// Лабораторная работа № 4 (Вариант № 5)
// Проект 5 (файл main): главная функция
#include <iostream>

using namespace std;

// Прототип функции из другого файла
double func5(double, double);

int main()
{
    setlocale(LC_ALL, "rus");
    double x, y, b;
    
    cout << "Ввод x = ";
    cin >> x;
    cout << endl << "Ввод y = ";
    cin >> y;
    
    b = func5(x, y); // Вызов функции
    
    cout << endl << "При x = " << x << " и y = " << y << endl;
    cout << "результат b = " << b << endl;
    
    system("PAUSE");
    return 0;
}
