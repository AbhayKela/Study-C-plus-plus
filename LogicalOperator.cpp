/* AND operator (&&) : conjunction is true only when both the expressions are true    
Expr 1    1  1   0   0
Expr 2    0  1   1   0
------------------------
Result   0  1   0   0

OR operator  (||) : disjunction (alternative) is true when any one of the two expressions is true
Expr 1    1  1   0   0
Expr 2    0  1   1   0
------------------------
Result   1  1   1   0

Negation operator (!) : 
    Exp     Result
    !(0)     1
    !(1)     0
*/
#include <iostream>
int main(){
    system ("clear");
    std::cout<<std::endl;
    std::cout << (7 > 5 && 5 != 18) << std::endl; 
    std::cout << (7 > 5 || 5 == 10) << std::endl; 
    std::cout << !1 << std::endl;
    std::cout << (10<<2) << std::endl;
    return 0;

} 