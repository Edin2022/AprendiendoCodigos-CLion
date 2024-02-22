//Tabla de Multiplicar 4 y 6. 22/02/2024
// Edin Josué Hernández Moscoso 0909-22-2183


#include <iostream>
using namespace std;

int main(){

// Tabla de multiplicar del 4
    cout << "Tabla de multiplicar del 4:" <<endl;
    for (int i = 1; i <= 10; ++i) {
        cout<< "4 * " << i << " = " << 4 * i <<endl;
    }

    // Tabla de multiplicar del 6
    cout<< "\nTabla de multiplicar del 6:" <<endl;
    for (int i = 1; i <= 10; ++i) {
        cout<< "6 * " << i << " = " << 6 * i <<endl;
    }

    return 0;
    }