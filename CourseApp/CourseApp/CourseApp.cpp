#include <iostream>

using namespace std;

class MaxOfArray
{
public:
    static double FindMax(double Array[], int length)
    {
        double Max = 0;
        for (int i = 0; i < length; i++)
        {
            if (i == 1)  Max = Array[i];
            if (Array[i] > Max)
                Max = Array[i];
        }
        return Max;
    }
};
int main()
{
    const int length = 5;
    double Array[length];
    cout << "Enter 5 elements" << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> Array[i];
    }
    double max = MaxOfArray::FindMax(Array, length);
    cout << MaxOfArray::FindMax(Array, length) << endl;
    return 0;
}
