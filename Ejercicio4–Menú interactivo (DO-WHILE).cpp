#include <iostream>

using namespace std;

int main() {
    int opcion;

    do {
        cout << "\nMENU" << endl;
        cout << "1. Mostrar numeros del 1 al 5" << endl;
        cout << "2.Mostrar numeros pares del 1 al 10" << endl;
        cout << "3.Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            int i = 1;
            while (i <= 5) {
                cout << i << endl;
                i++;
            }
        }
        else if (opcion == 2) {
            int i = 2;
            while (i <= 10) {
                cout << i << endl;
                i += 2;
            }
        }

    } while (opcion != 3);

    cout << "\nRealizado por: Lisbeth Vanesa Lopez Catalan" << endl;

    return 0;
}
