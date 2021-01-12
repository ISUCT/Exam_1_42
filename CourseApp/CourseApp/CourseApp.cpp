// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void writeStringToFile(string filename, string input)  // Конструктор с 2 параметрами 
{
	ofstream outfile(filename);

	outfile << input << endl;

	outfile.close();
}

int main()
{
	std::cout << "Exam" << std::endl;
	cout << "Input filename: ";
	string fn;
	getline(cin, fn);

	cout << "Input string: ";
	string inp;
	getline(cin, inp);
	cout << endl;
	writeStringToFile(fn, inp); //Использование конструктора с 2 параметрами 
	cout << "Writing complete";
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
