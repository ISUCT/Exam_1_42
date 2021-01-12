﻿// Puhova_Kristina_Examen_1_42.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Создайте абстрактный класс утка с методами swim, и  абстрактными методами fly и quack.
Показать пример использования реализованного класса.*/

#include <iostream>
#include <string>
using namespace std;

class Duck 
{
public:
	void swim()
	{
		cout << "The Duck is swimming!\n";
	}
	virtual void fly() = 0;
	virtual void quack() = 0;
};
class Duck_1 :
	public Duck 
{
private:
	string name;
public:
	virtual void fly()
	{
		cout << "The Duck is flying!\n";
	}
	virtual void quack()
	{
		cout << "The Duck is quacking!\n";
	}
};
int main()
{
	Duck_1 duck;
	duck.swim();
	duck.fly();
	duck.quack();

	return 0;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
