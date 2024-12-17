#include<iostream>

int main()
{
    std::cout<< "Enter the row of array : ";
    int row;
    std::cin>> row;
    std::cout<< "Enter the col of array : ";
    int col;
    std::cin>> col;

    int array[row][col];
    std::cout<< "Enter the elements for array."<< std::endl;
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            std::cout<< "position ("<<i<<","<<j<<") : ";
            std::cin>> array[i][j];
        }
    }
    int biggest=0;
    int index1;
    int index2;
    for(int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            if(biggest< array[i][j])
            {
                biggest= array[i][j];
                index1=i;
                index2= j;
            }

        }
    }
    std::cout<< "Biggest element of that array is : "<< biggest<< " at index : "<< index1<<","<<index2;
}
