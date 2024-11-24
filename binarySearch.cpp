#include<iostream>

int binarySearch(int arr[],int size,int target)
{
    int l=0;
    int r = size-1;

    while(l<=r)
    {
        int mid = (l+r)/2;

    if (target == arr[mid])
    {
        return mid;
    }
    else if (target < arr[mid])
    {
        r=mid-1;
    }
    else
    {
        l=mid+1;
    }
    }
    return -1;
}

int main()
{
    int data[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int length = sizeof(data)/sizeof(int);
    int target = 6;

    int result = binarySearch(data,length,target);

    if (result != -1)
    {
        std::cout<< "the result was found on the inded : " << result << std::endl;
    }
    else
    {
        std::cout<< "the target value not found";
    }
}
