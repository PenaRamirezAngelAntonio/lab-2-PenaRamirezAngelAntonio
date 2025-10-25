#include <iostream>
using namespace std;

int main() {
    int arr[3];

    cout << "Ingrese 3 números diferentes" << endl;
    
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    
    int menor = min(min(arr[0], arr[1]), arr[2]);
    int mayor = max(max(arr[0], arr[1]), arr[2]);

    cout << "El número más pequeño es " << menor << endl;
    cout << "El número más grande es " << mayor << endl;
    cout << "El número que está en el medio es " << arr[1] << endl;
    

    return 0;
}