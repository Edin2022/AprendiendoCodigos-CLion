// Un Numero es Impar o Par 22/02/2024

#include <iostream>

using namespace std;

int main(){

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un numero entero: " <<endl;
    int numero;
    cin >> numero;

    // Verificar si el numero es par
    if (numero % 2 == 0) {
        cout << "El numero ingresado es par: " << endl;
    } else {
        cout << "El numero ingresado es impar: " << endl;
    }


    return 0;
}
