// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Exam
{

private:
	int n, m;
public:
	Exam(int a, int b) {
		n = a;
		m = b;
	}
	void print()
	{

		setlocale(LC_ALL, "Rus");
		int** p = new int*[n];
		for (int i = 0; i < n; i++) {
			p[i] = new int[m];
		}


		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++) {
				p[i][j] = 1;
			}

		}
		for (int i = 1; i < n - 1; i++)
		{
			for (int j = 1; j < m - 1; j++) {
				p[i][j] = 0;
			}

		}

		string s;
		s = "*";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (p[i][j] == 1) {
					cout << s << ' ';
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}

		delete[]p;

	}
};
int main() {
	int a;
	int b;
	cin >> a >> b;
	Exam qwert(a, b);
	qwert.print();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
