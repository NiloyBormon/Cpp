#include<iostream>

int main()
{
    std::cout<<std::boolalpha; //boolalpha is used here to print true flase instade of 0 and 1
    bool value1{true};
    bool value2{false};

    std::cout<< "value1 : "<<value1<<std::endl; //here true = 1 and cout treats true as integer  so output is 1
    std::cout<< "value2 : "<<value2<<std::endl; // here false = 0 and cout treating false as 0 so output will be 0

    std::cout<<std::noboolalpha; //noboolalpha is used to print 0 and 1 instade of true flase nobool is used becuase bool was alredy beeing used and it would affact this also
    bool value5{true};
    bool value6{false};


    std::cout<< "value5 : "<<value5<<std::endl; //here true = 1 and cout treats true as integer  so output is 1
    std::cout<< "value6 : "<<value6<<std::endl; // here false = 0 and cout treating false as 0 so output will be 0

    bool value3{true};
    bool value4{false};

    std::cout<< "sizeof(bool) : "<<sizeof(bool)<< " Byte"<<std::endl;


    if(value3)
    {
        std::cout<< "if true this will run"<<std::endl; // here this statement will run because when true if statement runs and value 3 is true
    }
    else
    {
        std::cout<< "if false this will run"<<std::endl;
    }

    if(value4)
    {
        std::cout<< "if true this will run"<<std::endl;
    }
    else
    {
        std::cout<< "if false this will run"<<std::endl; // here this statement will run because when flase else statement runs and value 4 is false
    }
}
