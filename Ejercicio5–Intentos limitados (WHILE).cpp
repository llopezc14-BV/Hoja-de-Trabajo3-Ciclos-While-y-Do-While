#include <iostream>

using namespace std;

int main() {
    int clave;
    int intentos = 0;

    cout << "Ingrese una clave: ";
    cin >> clave;


    while (clave !=1001 && intentos < 2) {
        intentos++;
        cout << "Error. Intente de nuevo: ";
        cin >> clave;
    }


    if (clave == 1001) {
        cout << "Bienvenido" << endl;
    } else {
        cout << "Acceso denegado" << endl;
    }

    cout << "\nRealizado por: Lisbeth Vanesa Lopez Catalan" << endl;

    return 0;
}
