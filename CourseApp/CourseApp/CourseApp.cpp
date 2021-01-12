#include <iostream>
#include <string>

using namespace std;

class Worker

{
public:
    string surname;
    int experience;
    int payment;
    int hours;

    Worker(string s, int a, int c) //конструктор    
    {
        surname = s;
        experience = a;
        hours = c;
    }

    void Paypayment()
    {

        cout << "Payment($): "; cin >>  payment;
        
    }
    void display()
    {
        cout << "Surname: " << surname << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Number of hours worked: " << hours  << endl;
        Paypayment();
        cout << "-----------------------" << endl;
    }
    ~Worker() {}; //деструктор 
};


int main()
{
    Worker first ("Malakhov", 3, 6);         //создаю переменную класса
    Worker second ("Morgenstern", 4, 8);
    Worker third("Smirnov", 11, 7);
 
    first.display();     // использую функцию дисплей
    second.display();
    third.display();
  
    return 0;
}