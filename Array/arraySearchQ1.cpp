#include<iostream>

int smallestElement(int array[],int size)
{
    int smallest= array[0];
    for(int i=0;i<size-1;i++)
    {
        if(smallest>array[i+1])
        {
            smallest= array[i+1];
        }
    }
    return smallest;
}

int biggestElement(int array[],int size)
{
    int biggest;
    for(int i=0;i<size;i++)
    {
        if(array[i]> biggest)
        {
            biggest= array[i];
        }
    }
            return biggest;
}

int main()
{
    int size;
    std::cout<< "Enter the size of array : ";
    std::cin>> size;
    int array[size];
    std::cout<< "Enter the array elements "<< std::endl;
    for(int i=0;i<size;i++)
    {
        std::cout<< "Element "<<i+1<<" : ";
        std::cin>> array[i];
    }
    for(int i =0;i<size;i++)
    {
        std::cout<< array[i]<< " ";
    }
    int smallest=  smallestElement(array,size);
    std::cout<<"The smallest element of that array is : "<< smallest;
    int biggest= biggestElement(array,size);
    std::cout<< "The biggest element of that array is : "<< biggest;



}
