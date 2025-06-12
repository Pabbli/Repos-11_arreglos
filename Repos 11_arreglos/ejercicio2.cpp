#include <iostream>
using namespace std;

// Función que determina si un número es perfecto
bool esPerfecto(int n) {
    if (n <= 1) return false; // No hay números perfectos menores o iguales a 1

    int suma = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma == n;
}

int main() {
    int numero;
    cout << "Ingresa un número entero: ";
    cin >> numero;

    if (esPerfecto(numero)) {
        cout << numero << " es un número perfecto." << endl;
    } else {
        cout << numero << " no es un número perfecto." << endl;
    }

    return 0;
}
