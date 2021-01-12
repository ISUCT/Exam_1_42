// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<string>

using namespace std;
class TemperatureConverter
{

public:
	string convertTemp(int temperature, char convertTo)
	{

		string r = "nothing";
		if (convertTo == 'C' || convertTo == 'c')
		{
			r = "Цельсий = " + to_string(((float)temperature - 32) * 5 / 9);
		}
		else
		{

			(convertTo == 'F' || convertTo == 'f') r = "фаренгейт = " + to_string(9 * (float)temperature / 5 + 32);
		}

		return r;
	}
};
int main()
{
	TemperatureConverter type;
	cout << type.convertTemp(8, 'f') << endl;
	cout << type.convertTemp(2, 'c') << endl;
	cout << type.convertTemp(2, 'k') << endl;
	return 0;
}