#include <iostream>

using namespace std;

int main() {
    int clave;

    cout << "Ingrese una clave: ";
    cin >> clave;

    while (clave != 1234) {
        cout << "Error. Clave incorrecta. Intente de nuevo : ";
        cin >> clave;
    }

    cout << "\nRealizado por: Lisbeth Vanesa Lopez Catalan" << endl;

    return 0;
}
