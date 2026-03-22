#include <iostream>

using namespace std;

int main() {
    int numero;
    int suma_total = 0;

    cout << "Ingrese un numero (0 para finalizar): ";
    cin >> numero;

    while (numero != 0) {
        suma_total += numero;

        cout << "Ingrese un numero (0 para finalizar): ";
        cin >> numero;
    }

    cout << "\nTotal acumulado: " << suma_total << endl;
    cout << "\nRealizado por: Lisbeth Vanesa Lopez Catalan" << endl;

    return 0;
}
