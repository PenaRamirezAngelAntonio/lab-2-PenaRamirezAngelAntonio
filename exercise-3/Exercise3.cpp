#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Ejercicio 3. Parte 1. Número de 5 dígitos
    // string cantidad = "";
    
    // cout << "Ingrese un número de 5 dígitos: " << endl;
    // cin >> cantidad;

    // for(int i = 0; i < 5; i++) {
    //     cout << cantidad[i] << "   ";
    // }

    // //Ejercicio 3. Parte 2. División con los operadores / y %
    // float num1 = 0;
    // float num2 = 0;
    // string operador = "";
    // float resultado = 0;

    // cout << endl << "Ingrese el primer número: ";
    // cin >> num1;

    // cout << "Ingrese el segundo número: ";
    // cin >> num2;

    // cout << "Ingrese un operador (/ o %): ";

    // do {
    //     cin >> operador;
    //     if (operador == "/") {
    //         resultado = num1 / num2;
    //         cout << "El resultado es " << resultado << endl;
    //     } else if (operador == "%") {
    //         resultado = fmod(num1, num2);
    //         cout << "El resultado es " << resultado << endl;
    //     } else {
    //         cout << "Operador incorrecto. Ingrese nuevamente el operador: ";
    //     }
    // } while (operador != "/" && operador != "%");

    // float resultado2 = 13 / 2 % 2;
    // cout << resultado2 << endl;

    //Ejercicio 3. Punto 3.
    int digito1 = 0;
    int digito2 = 0;
    int digito3 = 0;

    cout << "Ingresa el primer dígito: ";
    cin >> digito1;

    cout << "Ingresa el segundo dígito: ";
    cin >> digito2;

    cout << "Ingresa el tercer dígito: ";
    cin >> digito3;

    cout << "Tus dígitos combinados son " << digito1 << digito2 << digito3 << endl;


    return 0;
}