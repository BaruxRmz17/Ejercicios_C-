#include <iostream>
using namespace std;

//arr[numero de string o de valores que va a tener el arreglo]


int main(){
    string arr[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

    int Lenght = 7;

    for (int i = 0; i < Lenght; i++ ){
        cout<<"Semana "<<i<<endl;
        for( int j = 0; j < Lenght; j++){
            cout<<arr[j]<<endl;
        }

        cout<<endl;
    }

    return 0;
}