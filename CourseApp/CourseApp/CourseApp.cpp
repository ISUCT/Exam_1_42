#include <iostream> 
#include <fstream> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	string path;
	string str;
	char ch;
	ifstream ifs;
	cout << "������� �������� ����� : "; cin >> path;
	ifs.open(path);
	if (!ifs.is_open())
	{
		cout << "�������� ������ �� ����� �������� �����!";
	}
	else
	{
		system("cls");
		cout << "���� ������!" << endl;
		cout << "�������� ����� : " << path << endl;
		cout << "���������� ����� : " << endl;
		while (ifs.get(ch))
		{
			cout << ch;
		}
	}
	ifs.close();
	return 0;
}
