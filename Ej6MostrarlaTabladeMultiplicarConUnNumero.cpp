// Mostrar la Tabla de Multiplicar con un Numero 22/02/2024

#include <iostream>
using namespace std;

int main(){

    int numero;

    do{

        cout<<"Digite un numero del 1 al 10: " <<endl;
        cin>>numero;
    } while ((numero<1) || (numero>10));

    for(int i=1; i<=10; i++){
        cout<<numero<<" * " <<i<< " = "<<numero * i<<endl;
    }


    return 0;
}
