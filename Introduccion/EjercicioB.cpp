#include <iostream>
using namespace std;

/*2.- Escribir un programa que lea la entrada estandar
      el precio de un producto y se le aplique el IVA
      que el usuario le especifique
*/

int main(){

    float precio = 0.0, IVA = 0.0, total = 0.0;
    cout << "Price of product: $";  cin >> precio;
    cout << "% IVA = "; cin >> IVA;

    IVA = IVA / 100;
    total = (IVA * precio) + precio;

    cout << "Total price is: $" << total << "\n";
    return 0;
}