#include <iostream>

using namespace std;

int main(){
int a = 0;
int b = 0;
cout << endl << "Enter value of a" << endl;
cin >> a;
cout << "Enter value of b" <<endl;
cin >> b;

if (a > b)
    cout << a << " > " << b <<endl;
else 
    cout << a << " < " << b <<endl;

cout << (7 < 8 || 5 > 1) << endl;
return 0;
}
