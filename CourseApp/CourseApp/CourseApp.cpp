#include <iostream>
#include <string>


void line(std::string str, int len)
{
    std::cout << '0';    //the first number will always be 0, because compare with the previous one

    for (int i = 1; i < len; i++)
    {

        if (str[i] == str[i - 1])
            {
                std::cout << '0';
            }
        else
            {
                std::cout << '1';
            }
    }
} 
int main()

{
    std::string str;
    std::cin >> str;

    int len = str.size() / sizeof(char);   //determining string length by string method

    line(str, len);   //method

    return 0;
}
