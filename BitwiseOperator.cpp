# include <iostream>
// This program is to output result of AND operator, a example of bitwise operations
//              AND (&)      OR (|)     NOT (~)     XOR (^)
// Element 1:  1 0  1 0  |  1 0 1 0  |  1 0 1 0  | 1 0 1 0 |
// Element 2:  0 0  1 1  |  0 0 1 1  |           | 0 0 1 1 |
// ---------------------------------------------------------------------
// Result   : 0  0  1 0  |  1 0 1 1  | 0  1 0  1 | 1 0 1 0 |

// Bitwise shift left (<<)
// Bitwise shift right (>>)
int main (){
    system ("clear");
    // The expected output of cout should be 2
    std::cout << (10 & 2) << std::endl;
    //  1 0 1 0    (1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 8+0+2+0 = 10)
    //  0 0 1 0    (0*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 0+0+2+0 = 2 )
    // ----------
    //  0 0 1 0    (0*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 0+0+2+0 = 2 )
    std::cout << (10 | 2) << std::endl;  //  1 0 1 0    (1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 8+0+2+0 = 10 )
    std::cout << (10 << 1) << std::endl; // 1 0 1 0 0   (1*2^4 + 0*2^3+ 1*2^2 + 1*2^1 + 0*2^0 = 16+0+4+2+0 = 20)
    std::cout << (10 >> 1) << std::endl; //  0 1 0 1    (0*2^3 + 1*2^2 + 0*2^1 + 1*2^0 = 0+4+0+1 = 5 )
    return 0;    
}
