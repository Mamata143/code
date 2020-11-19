#include<iostream>
#include <string>
using namespace std;
int main()
{
    std::string str1, str2;
    int result = -1, i = 1;
    std::cout<<"Enter String1:";
    getline(std::cin, str1);
    std::cout<<"Enter String2:";
    getline(std::cin, str2);
    do
    {
        result = str1.find(str2, result + 1);
        if (result != -1)
            std::cout<<"matching found at position:"<<result<<"\t";
        i++;
    } while (result >= 0);
    return 0;
}


