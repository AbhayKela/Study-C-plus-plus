#include <iostream>

int main(){
    system ("clear");
    for (int i = 1 ;i <= 10; i++) // AMOUNT OF ROW AND LENGTH OF COLUMN
    {
        if (i % 2 == 0) // exclude odd numbers of rows
        break; 
        // Everything after BREAK wont be executed and ACTUAL loop will be closed
        for (int j = 1; j <= 10; j++) // AMOUNT OF COLUMNS AND LENGTH OF ROW
        {
            if (j % 2 != 0) // exclude odd numbers of columns
            continue;
        std::cout.width(6);
        std::cout << i * j;
        }
        std::cout<<std::endl;        
    }    
    return 0;    
}
