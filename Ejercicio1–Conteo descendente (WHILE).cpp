#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero mayor que 1: ";
    cin >> numero;

    while (numero <= 1) {
        cout << "Error. Ingrese un numero mayor que 1: ";
        cin >> numero;
    }

    while (numero >= 1) {
        cout << numero << endl;
        numero--;
    }

    cout << "\nRealizado por: Lisbeth Vanesa Lopez Catalan" << endl;

    return 0;
}
