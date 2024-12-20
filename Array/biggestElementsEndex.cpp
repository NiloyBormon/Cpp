#include <iostream>

int largestElementIndex(int array[], int size)
{
    int largestElement=0;
    int largeIndex;
    for(int i=0;i<size;i++)
    {
        if(array[i]>largestElement)
        {
            largestElement=array[i];
            largeIndex= i;
        }
    }
    return largeIndex;

}

int main()
{
    std::cout<< "Size of array : ";
    int size;
    std::cin>> size;
    int array[size];
    std::cout<< "Enter the elements of array : ";
    for(int i=0;i<size;i++)
    {
        std::cout<< "Element of index "<< i<< " : ";
        std::cin >> array[i];
    }
    int largestIndex = largestElementIndex(array,size);
    std::cout<<"Index of the largest element is : "<< largestIndex;


}
