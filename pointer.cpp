#include<iostream>

int main()
{
    int n = 5;

    std::cout<< &n << std::endl;//this outputs the address of n variable
    std::cout<< std::endl;

    int* nPtr = &n;

    std::cout<< *nPtr <<std::endl;
    std::cout<< nPtr <<std::endl;
    std::cout<< &nPtr <<std::endl;
    std::cout<< n << std::endl;
    std::cout<< std::endl;

    //pointer to pointer

    int** nPtr2 = &nPtr;

    std::cout<< **nPtr2 <<std::endl;


}
