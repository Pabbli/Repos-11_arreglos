#include <iostream>
using namespace std;

// Funci�n que determina si un n�mero es perfecto
bool esPerfecto(int n) {
    if (n <= 1) return false; // No hay n�meros perfectos menores o iguales a 1

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
    cout << "Ingresa un n�mero entero: ";
    cin >> numero;

    if (esPerfecto(numero)) {
        cout << numero << " es un n�mero perfecto." << endl;
    } else {
        cout << numero << " no es un n�mero perfecto." << endl;
    }

    return 0;
}
