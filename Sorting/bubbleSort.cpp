#include<iostream>

void bubbleSort(int arr[], int length)
{
    int temp;
    for (int i = 0;i<length;i++)
    { bool swapped= false;
        for(int j = 0; j<length-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
                swapped = true;
            }
        }

    if (!swapped)
        return;

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

    bubbleSort(data, length);
    print1dArray(data, length);

}
