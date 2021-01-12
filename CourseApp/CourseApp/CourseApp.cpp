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

    Worker(string s, int a, int b, int c) //конструктор    
    {
        surname = s;
        experience = a;
        payment = b;
        hours = c;
    }

    void display()
    {
        cout << "Surname: " << surname << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Hourly payment: " << payment << "$" << endl;
        cout << "Number of hours worked: " << hours  << endl;
        cout << "-----------------------" << endl;
    }
    ~Worker() {}; //деструктор 
};


int main()
{
    Worker first ("Malakhov", 3, 1000, 6);
    Worker second ("Morgenstern", 4, 15, 8);
    Worker third("Smirnov", 11, 500, 7);
 
    first.display();
    second.display();
    third.display();
  
    return 0;
}