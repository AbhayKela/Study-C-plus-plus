#include <iostream>

void arrayfunction(int arr[5]);
void printmin(int arr[5]);
void printmax(int arr[5]);

int main()
{
    int array1[5] = {100,200,40,55,300};
    int array2[5] = {2000,45,65,56,67};
    std::cout << "First array: " << std::endl;
    arrayfunction(array1);
    printmin (array1);
    printmax (array1);
    std::cout << std::endl;
    std::cout << "Second array: " << std::endl;
    arrayfunction(array2);
    printmin (array2);
    printmax (array2);
    std::cout << std::endl;
}

void arrayfunction(int arr[5])
{
    for (int i=0; i<5; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

void printmin(int arr[5])
{   
    int min = arr[0];
    for (int i = 0; i < 5; ++i)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }      
    }
    std::cout << "Minimum element is " << min << std::endl;
}
void printmax(int arr[5])
{   
    int max = arr[0];
    for (int i = 0; i < 5; ++i)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }      
    }
    std::cout << "Maximum element is " << max << std::endl;
}