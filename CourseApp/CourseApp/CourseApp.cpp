#include <iostream>
using namespace std;



void resh(int* arr, int size) {
	int n = 1;
	int a;
	cout << arr[0];
	for (int i = 0; i < size - 1; i++) {

		if (arr[i] == arr[i + 1]) {
			cout << 0;
		}
		else
			cout << 1;
	}
}


void main() {
	int size = 5;
	cin >> size;
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int*& arrRef = arr;
	resh(arrRef, size);

	delete[] arr;


}