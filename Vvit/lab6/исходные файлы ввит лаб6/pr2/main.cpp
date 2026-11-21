// Файл main.cpp: выбор способа решения с помощью switch
#include <iostream>
using namespace std;

void GetData(double&, double&, double&, double&, double&);
int GetMethod();
void PutResult(double, int, int);
void PutError();
double Razv(double, double, double, double, double, int&);
double Razm(double, double, double, double, double, int&);

int main()
{
    double x, y, z, a, b, g;
    int n = 0;
    int method;

    GetData(x, y, z, a, b);
    method = GetMethod();

    switch (method)
    {
    case 1:
        g = Razv(x, y, z, a, b, n);
        PutResult(g, n, method);
        break;
    case 2:
        g = Razm(x, y, z, a, b, n);
        PutResult(g, n, method);
        break;
    default:
        PutError();
        break;
    }

    return 0;
}
