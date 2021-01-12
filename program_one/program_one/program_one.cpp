#include <iostream>  //подключаем бмблиотеки
#include <string>
using namespace std;  //подключаем пространство имен, чтобы постоянно не писать std::

string kodirovka(string stroka)  // объявляем функцию кодирования
{   
	string kod_stroka = "0";   // по условию задачи сначала ставим "0"
	int stroka_size = stroka.size(); // преобразуем из size_t в int
	for (int i = 1; i < stroka_size; i++)  // в этом цикле происходит кодировка
	{
		if (stroka[i] == stroka[i - 1]) 
		{
			kod_stroka += "0";
		}
		else 
		{
			kod_stroka += "1";
		}
	}
	return kod_stroka; // возвращаем закоированную строку
}

int main() {
	setlocale(LC_ALL, "ru"); // ставим локаль, чтобы отображались русские буквы
	string str; 
	cout << "Ввеите последовательность битов: "; 
	cin >> str;
	cout << endl;
	cout << kodirovka(str);
	cout << endl;
	return 0;
}
