#include<iostream>

int linearSearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i] == target)
        {
            return i;
            break;
        }
    }
}

int main()
{
    int data[]={6,5,1,23,64,123,34,12,6,3,4,123,23,34,12,3};
    int size = sizeof(data)/sizeof(int);
    int target = 123;

    int result = linearSearch(data,size,target);

    std::cout << " result was found at index : "<< result;
}
