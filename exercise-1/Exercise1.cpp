#include <iostream>
using namespace std;

int main() {
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    float suma = 0;
    float promedio = 0;
    int producto = 0;
    int smallest = 0;   // Variable en inglés debido a errores con los caracteres alfanuméricos (ñ)
    int grande = 0;

    cout << "Ingrese tres enteros diferentes: " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    
    suma = num1 + num2 + num3;
    promedio = suma / 3;
    producto = num1 * num2 * num3;
    smallest = min(min(num1, num2), num3);
    grande = max(max(num1, num2), num3);


    cout << "La suma es " << suma << endl;
    cout << "El promedio es " << promedio << endl;
    cout << "El producto es " << producto << endl;
    cout << "El más pequeño es " << smallest << endl;
    cout << "El más grande es " << grande << endl;
    
    return 0;
}