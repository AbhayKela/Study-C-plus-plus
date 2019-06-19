#include <iostream>

void lottery(int, int);

int main()
{
    system("clear");
    srand(time(NULL)); // seeds
    std::cout << "Randon numbers using srand and time(NULL)" << std::endl;
    int nr = rand()% 300; // % : modulo operator for limiting values
    std::cout << nr << std::endl;
    nr = rand()% 5;
    std::cout << nr << std::endl<<std::endl;
    std::cout << "Below are the output from lottery function_no repetation" << std::endl;
    lottery(56,8);
    return 0;
}

void lottery (int total_balls, int balls_to_draw)
{
    
    if (total_balls < balls_to_draw)
    {
        return;
    }
           
    srand(time(NULL));
    int *balls = new int (balls_to_draw);
    
    for (int i = 0; i < balls_to_draw; i++)
    {       
        balls[i] = rand() %total_balls; // limiting the random number by total given with the function
        for (int j = 0; j < i+1 ; j++) // this condition is to avoid repeating numbers in lottery
        {
            if (balls[i] == balls[j] && i != j)
            {
                i--;
                break;
            }
            else if(j==i) // need to check why this statement????
            std::cout << balls[i] << std::endl; 

        }
    }
    delete balls;
}