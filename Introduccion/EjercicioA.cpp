#include <iostream>
using namespace std;

/*
    1.- Realice las operaciones básicas de
        suma, resta, multiplicación y división.

*/

int main(){

    int A, B, suma = 0, resta = 0;
    int mult = 0, division = 0; 

    cout << "Give number A: ";   cin >> A;
    cout << "Give number B: ";   cin >> B;

    suma  = A + B;
    resta = A - B;
    mult  = A * B;
    division = A / B;

    cout << A << "+" << B << " = " << suma  << "\n";
    cout << A << "-" << B << " = " << resta << "\n";
    cout << A << "*" << B << " = " << mult  << "\n";
    cout << A << "/" << B << " = " << division << "\n";

    return 0;
}