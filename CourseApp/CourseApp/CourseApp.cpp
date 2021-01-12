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
	cout << "Введите названия файла : "; cin >> path;
	ifs.open(path);
	if (!ifs.is_open())
	{
		cout << "Возникла ошибка во время открытия файла!";
	}
	else
	{
		system("cls");
		cout << "Файл открыт!" << endl;
		cout << "Название файла : " << path << endl;
		cout << "Содержимое файла : " << endl;
		while (ifs.get(ch))
		{
			cout << ch;
		}
	}
	ifs.close();
	return 0;
}
