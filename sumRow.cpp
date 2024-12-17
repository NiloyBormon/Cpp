#include <iostream>
int main()
{
    int row;
    int col;
    std::cout<< "Enter row number : ";
    std::cin>> row;
    std::cout<< "Enter col number : ";
    std::cin>> col;
    int array[row][col];
    int sum = 0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            std::cout<< "Enter element for index ("<< i<<","<< j<< ") : ";
            std::cin>> array[i][j];
            sum =sum + array[i][j];

        }
        std::cout<< "Sum of row "<<i<<" : "<<sum<<std::endl;
        sum=0;
    }

}
