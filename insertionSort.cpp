#include<iostream>

void insertionSort(int arr[], int length)
{
    int temp;
    for(int i=1;i<length;i++)
    {
        temp = arr[i];
        int j=i-1;
        while(j>=0 && arr[j] > temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void print1dArray(int arr[], int length)
{
    for(int i=0;i<length;i++)
    {
        std::cout<<arr[i]<< " " ;
    }
}

int main()
{
    int data[]= {5,9,3,1,7,4,8};
    int length = sizeof(data)/sizeof(int);

    insertionSort(data,length);
    print1dArray(data,length);
}
