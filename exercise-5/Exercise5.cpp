#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[6] = {0, 1, 2, 3, 4, 5};
    int resultado = 0;

    cout << "Función: f(x) = x³ - x² + 5, aplicado en un intervalo cerrado de [" << arr[0] << ", " << arr[5] << "]: " << endl;

    cout << "x   f(x)" << endl;
    cout << "--------" << endl;
    for(int i = 0; i < 6; i++) {
        resultado = pow(arr[i], 3) - pow(arr[i], 2) + 5;
        cout << arr[i] << "   " << resultado << endl;
    }

    return 0;
}