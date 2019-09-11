#include <iostream>

int main()
{
    // Option 1 : initialization and declaration not on same time
    int arr[2][2] = 
    {
        {1,34},
        {45,56}
    };

    // Option 2 : initialization and declaration not on same time
   /* int arr[2][2];
    arr[0][0] = 1;
    arr[0][1] = 200;
    arr[1][0] = 45;
    arr[1][1] = 56;
    */

    for (int i = 0; i< 2; ++i)
    {
        for (int j = 0; j< 2; ++j)
        {
            std::cout.width(8);
            std::cout << arr[i][j];
        }
        std::cout<<std::endl;
    }

}