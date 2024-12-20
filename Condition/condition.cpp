//condition example with odd even number detection
#include<iostream>

int main()
{
    int n;
    std::cout<< "Enter n";
    std::cin>>n;
    if(n>0)
    {
        std::cout<< "Positive"; //we can also not use {} if single statement but better to use
    }
    else if(n==0)
    {
        std::cout<< "Zero";
    }
    else
    {
        std::cout<< "Negative";
    }

    //odd even
    int number;
    std::cout<<"Enter Number";
    std::cin>>number;

    if(number%2==0)
    {
        std::cout<< "Number is an even number";
    }
    else
    {
        std::cout<< "Number is an odd number";
    }

}
