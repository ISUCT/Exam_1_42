#include <iostream>
#include <cmath>

class Table {
public:
	void T(int b, double x_s, double x_e, double x_step) {
		for (double i = x_s; i <= x_e; i += x_step) {
			std::cout << 1 + sin(pow(b, 3) + pow(i, 3)) << std::endl;
		}
	}
};


int main()
{
	const double pi = 3.14159265358979323846;
	Table T;
	int b = 2;
	double s = 0;
	double e = 3 * pi;
	double step = 0.1 * pi;
	T.T(b, s,e,step);
	return 0;
}

