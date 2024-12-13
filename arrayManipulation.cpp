//replace any value at a position
// not finished
#include<iostream>

int main()
{
    int length;
    std::cout << "Enter the size of array : ";
    std::cin>> length;
    if(length<0)
    {
        std::cout<< "Invalid size.";
    }
    int array[length];
    std::cout<< "Enter the elements of array." << std::endl;
    for(int i=0;i<length;i++)
    {
        std::cout<< "Element for ("<< i+1 << ") position."<<std::endl;
        std::cin>> array[i];
    }
    int target;
    std::cout<< "For which position you want to replace the value :";
    std::cin>> target;
    if(target<1 || target>length)
    {
        std::cout<< "Invalid Input.";
    }
    std::cout<< "Enter the value u want to replace with :";
    int value;
    std::cin>> value;
    array[target-1]=value;
    for (int i=0;i<length;i++)
    {
        std::cout<< array[i]<<" ";
    }
}
