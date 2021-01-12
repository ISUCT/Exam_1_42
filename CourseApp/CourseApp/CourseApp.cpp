#include <iostream>
using namespace std;

class maximum {
public:
	void max() {
		int maximum = -2147483648;
		int n;
		int i;
		cout << "¬ведите длину массива :"; cin >> n;
		int* arr = new int[n];
		for (i = 1; i < n + 1; i++) {
			cin >> *arr;
			if (*arr > maximum) {
				maximum = *arr;
			}

		}

		cout << maximum << endl;
	}

};
int main()
{
	setlocale(LC_ALL, "Russian");

	maximum a;

	a.max();

	return 0;

}
