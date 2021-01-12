#include <iostream>

using namespace std;

class Car
{
public:
    int distanse;
    int howlong;
    
    void start();
    void stop();

    void drive()
    {
        cout << "Enter how long drive?" << endl;
        cin >> howlong;
        distanse = howlong * 60;
        cout << "distance = " << distanse;
    }
};
int main()
{
    Car Toyota;
    Toyota.drive();
    return 0;
}
