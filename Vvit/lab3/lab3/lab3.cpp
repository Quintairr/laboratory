#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	double x, y, b;
	int k, l, m, n;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	b = cbrt((x + y) / (0.2 * x)) * sin(pow(tan(x), 2));
	k = b;
	l = int(b);
	m = ceil(b);
	n = floor(b);
	cout << "Вещественное b= " << b << endl;
	cout << "Целая часть результата (неявно) k= " << k << endl;
	cout << "Целая часть результата (явно) l= " << l << endl;
	cout << "Округленное в большую сторону m = " << m << endl;
	cout << "Округленное в меньшую сторону n= " << n << endl;
	cout << "Значение префиксного инкреммента ++k = " << ++k << endl;
	cout << "Значение постфиксного инкремента l++ = " << l++ << endl;
	cout << "Значение k после приращения = " << k << endl;
	cout << "Значение l после приращения = " << l << endl;

	return 0;
}