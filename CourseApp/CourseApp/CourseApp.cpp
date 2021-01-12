#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//      Полехин А. 1/42
//      Написать класс, содержащий метод, реализующий игру «Камень, ножницы, бумага». Каждому элементу присваивается числовое значение 
//		Камень — 1, Ножницы — 2 Бумага — 3, которые и передаются в метод в виде параметра (один параметр от первого игрока, другой от другого). 
//	    Показать пример использования реализованного класса."

class Rock_Paper_Scissors {
public:
	Rock_Paper_Scissors() {
		name_1 = "";
		name_2 = "";
		move_1 = 0;
		move_2 = 0;
		end = false;
	}	
	int move_1, move_2;

	void set_names(string name_1, string name_2) {
		this->name_1 = name_1;
		this->name_2 = name_2;
	}

	bool get_end() {
		return end;
	}

	void game() {
		system("cls");
		switch (move_1)
			{
			case 1:
				switch (move_2) {
				case 1: cout << "Камень Х Камень\nНичья, переиграйте.\n"; break;
				case 2: cout << "Камень Х Ножницы\nПобедил игрок " << name_1; end = true; break;
				case 3: cout << "Камень Х Бумага\nПобедил игрок " << name_2; end = true; break;
				default: cout << "Неверный ход игрока " << name_2 << ". Переиграйте.\n"; break;
				}
				break;
			case 2:
				switch (move_2) {
				case 1: cout << "Ножницы Х Камень\nПобедил игрок " << name_2; end = true; break;
				case 2: cout << "Ножницы Х Ножницы\nНичья, переиграйте.\n"; break;
				case 3: cout << "Ножницы Х Бумага\nПобедил игрок " << name_1; end = true; break;
				default: cout << "Неверный ход игрока " << name_2 << ". Переиграйте.\n"; break;
				}
				break;
			case 3:
				switch (move_2) {
				case 1: cout << "Бумага Х Камень\nПобедил игрок " << name_1; end = true; break;
				case 2: cout << "Бумага Х Ножницы\nПобедил игрок " << name_2; end = true; break;
				case 3: cout << "Бумага Х Бумага\nНичья, переиграйте.\n"; break;
				default: cout << "Неверный ход игрока " << name_2 << ". Переиграйте.\n"; break;
				}
				break;
			default:
				cout << "Неверный ход игрока " << name_1 << ". Переиграйте.\n";
				break;
		}
	}
private:
	string name_1;
	string name_2;
	bool end;
};

int main() {
	setlocale(LC_ALL, "Russian");
	string name1, name2;

	Rock_Paper_Scissors game;
	cout << "Имя первого игрока:  "; cin >> name1;
	cout << "\nИмя второго игрока:  "; cin >> name2;
	game.set_names(name1, name2);
	system("cls");

	while (game.get_end() == false) {
		cout << "Ходы: 1 - Камень, 2 - Ножницы, 3 - Бумага\n";
		cout << "Игрок " << name1 << ", ходитесь: "; cin >> game.move_1;
		cout << "Игрок " << name2 << ", ходитесь: "; cin >> game.move_2;
		game.game();
	}
	return 0;
}

