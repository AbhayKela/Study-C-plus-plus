#include <iostream>
/* Handeling exceptions: to avoid error/ crash in program execution */

class DivisionbyZeroException
{
    public: 
        void getErrorMessage(){std::cout << "Error: Do not divide by zero!" <<std::endl;}
};
double division(double a, double b) throw (DivisionbyZeroException) // throw here is for information and better programming practises
{
    if (b==0)
        throw DivisionbyZeroException();
    return a/b;
}
int main()
{
    system("clear");
    double result;
    try 
    {
        result = division(5,0);
        std::cout << "The result is " << result <<std::endl;

    }
    catch(DivisionbyZeroException e) // Catch for invoking error message
    {
        e.getErrorMessage();
    }
    catch(...)
    {
        std::cout << "This will be executed when other catch fail to invoke" << std::endl;
    }

    return 0;
}

