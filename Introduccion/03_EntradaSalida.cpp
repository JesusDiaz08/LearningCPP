#include <iostream>
using namespace std;

/* Lectura y salida de datos estándar. */

int main(){
    int number;
    float fnumber;

    cout << "Give me a integer: ";  //Salida estandar
    cin >> number;                  //Entrada estandar
    cout << "Give me a float: ";    //Salida estandar
    cin >> fnumber;                 //Entrada estandar
    
    cout << "Your integer number is: " << number << "\n";
    cout << "Your float number is: "   << fnumber << "\n";

    return 0;
}
