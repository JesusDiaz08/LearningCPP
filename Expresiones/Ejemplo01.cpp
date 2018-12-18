//1. Escribe la siguiente expresion matematica como expresion en C++
// a sobre b mas uno
#include <iostream>
using namespace std;

int main(){

    float a, b, res = 0;
    cout << "A: ";  cin >> a;
    cout << "B: ";  cin >> b;
    
    res = (a / b) + 1;

    //Si se desea redondear, entonces usamos precision
    cout.precision(7);
    cout << "Resultado: " << res << "\n";
    return 0;
}