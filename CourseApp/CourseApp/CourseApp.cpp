/*
Ќаписать класс, содержащий метод, реализующую вывод таблицы y = 1 + sin(b^3 + x^3) b=2,
x на интервале от 0 до 3pi с шагом 0.1pi. X, a и b €вл€ютс€ передаваемыми параметрами
метода. ѕоказать пример использовани€ реализованного класса.
*/

#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>

using namespace std;

class Table 
{
public: static void PrintTable(double b, double x) 
{
	cout << "Y(" << x << ") = " << 1 + sin(pow(b, 3) + pow(x, 3)) << endl; 
}
};

int main()
{
	double const b = 2; 
	for (double x = 0; x <= 0.3 * M_PI; x += 0.1 * M_PI) 
	{
		Table::PrintTable(b, x); 
	}
}