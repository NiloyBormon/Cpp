#include<iostream>

int main()
{
    char char1 {'a'};
    char char2 {'b'};
    char char3 {'c'};

    std::cout << "char1 : " << char1 << std::endl; //printing regualr char variable values
    std::cout << "char2 : " << char2 << std::endl;
    std::cout << "char3 : " << char3 << std::endl;

    std::cout << std::endl; //space

    char char4 {65}; // refering to A from ascII value

    std::cout << "char4 : " << char4 << std::endl;// priting the ascII A
    std::cout << "char4(int) : " << static_cast<int>(char4) << std::endl;//printing the int as it is 65 not as caracter A
}
