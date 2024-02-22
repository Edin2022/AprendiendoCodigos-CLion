// Numero Primo o No  22/02/2024

#include <iostream>
using namespace std;

int main(){

    int numero = 0;
    int divisiones = 1;
    int residuo = 0;

    cout<<"Calcular si un numero es primo o no: " <<endl;
    cout<<"Ingrese un numero:";
    cin>>numero;

    do{
        if(numero % divisiones ==0){
            residuo++;


        }
        divisiones++;
    } while (divisiones <= numero);
    if (residuo == 2){
        cout<<"El numero: " <<numero<<"\nes primo ";
    } else {
        cout<<"El numero: " <<numero <<"\nno es primo ";
    }
    return 0;
}
