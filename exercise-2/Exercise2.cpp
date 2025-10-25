#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num1 = 0;
    float num2 = 0;
    float modulo = 0;   // Variable nombrada "modulo" y no "módulo" debido a errores en caracteres alfanuméricos (ó)

    cout << "Ingrese 2 números enteros: " << endl;
    cin >> num1;
    cin >> num2;
    modulo = fmod(num1, num2);

    cout << "El módulo de los 2 números enteros es " << modulo << endl;
    
    if (fmod(num1, 2) == 0) {
        cout << "El primer número es par" << endl;
    } else {
        cout << "El primer número es impar" << endl;
    }

    if (fmod(num2, 2) == 0) {
        cout << "El segundo número es par" << endl;
    } else {
        cout << "El segundo número es impar" << endl;
    }

    return 0;
}