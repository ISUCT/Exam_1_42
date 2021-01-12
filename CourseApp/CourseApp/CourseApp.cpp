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
    string NameChel;
    string AdressChel;
    string CityChel;
    string RegionChel;
    int IndexChel;
    ManPochta(string NameChel, string AdressChel, string CityChel, string RegionChel, int IndexChel) //конструктор
    {
        name = NameChel;
        adress = AdressChel;
        city = CityChel;
        region = RegionChel;
        index = IndexChel;
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
    ManPochta ManPochta("q","y","t","e",1); 
        ManPochta.display();
    return 0;
};
