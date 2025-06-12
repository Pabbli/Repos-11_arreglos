 #include <iostream>
using namespace std;

void divisionPorRestas(int num1, int num2) {
    int mayor = (num1 > num2) ? num1 : num2;
    int menor = (num1 < num2) ? num1 : num2;

    int cociente = 0;
    int resto = mayor;

    while (resto >= menor) {
        resto -= menor;
        cociente++;
    }

    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;
}

int main() {
    int a, b;
    cout << "Introduce dos numeros enteros positivos: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Ambos numeros deben ser enteros positivos." << endl;
    } else {
        divisionPorRestas(a, b);
    }

    return 0;
}

