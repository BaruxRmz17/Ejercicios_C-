#include <iostream>
using namespace std;

int main(){
    int final = 0;
    int Pfinal = 0;
    int precioF = 0;
    cout<<"Ingresa el precio final de tu compra ";
    cin>>precioF;

    if (precioF >= 100){
        cout<<"Felicidadestu compra es mayor a 100 pesos y recibiras un descuento del 10%"<<endl;
        final = precioF / 10;
        Pfinal = precioF - final;


    }

    else{
        cout<<"Tu compra es menos a 100 pesos y no puedes recibir descuento";
        Pfinal = precioF;
    }

    cout<<"El precio final a pagar es de "<<Pfinal<<endl;

    return 0;


}

