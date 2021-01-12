#include <iostream>
#include <cmath>
using namespace std;
class ManPochta	
{
public:
    string name;
    string adress;
    string city;
    string region;
    int index;
    string s;
    string a;
    string b;
    string c;
    int d;
    ManPochta() //конструктор
    {
        name = s;
        adress = a;
        city = b;
        region = c;
        index = d;
    }

    void display()
    {
        cout << "Name: "; cin >> name;
        cout << "Adress: "; cin >> adress;
        cout << "City: "; cin >> city;
        cout << "Region: "; cin >> region;
        cout << "PostCode: "; cin >> index;
    }
    ~ManPochta() {}; //деструктор 
};
int main()
{
    ManPochta ManPochta;
        ManPochta.display();
    return 0;
};
