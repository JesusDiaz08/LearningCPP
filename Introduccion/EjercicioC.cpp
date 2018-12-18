#include <bits/stdc++.h>
using namespace std;

/*
Realice un programa que lea de la entrada los siguiente datos de una persona:
    - Edad  :   dato de tipo entero
    - Sexo  :   dato de tipo caracter
    - Altura:   dato de tipo real
El programa debe mostrarlos por la salida estándar.
*/
int main(){
    int edad; char sexo[10]; float altura;
    
    cout << "Edad: ";   cin >> edad;
    cout << "Sexo: ";   cin >> sexo;
    cout << "Altura en mts: "; cin >> altura; 

    cout << "Edad: " << edad << "\n";
    cout << "Sexo: " << sexo << "\n";
    cout << "Altura en mts: " << altura << "\n";

    return 0;
}