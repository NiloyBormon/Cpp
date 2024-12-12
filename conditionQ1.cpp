#include<iostream>

int main()
{
    char character;
    std::cout<< "Enter Character";
    std::cin >> character;

    if('a' <= character && character <= 'z')
    {
        std::cout << "Your character is lower case";
    }
    else if('A' <= character && character  <= 'Z')
    {
        std::cout << "Your character is upper case";
    }
    else
    {
        std::cout << "Invalid character";
    }
}
