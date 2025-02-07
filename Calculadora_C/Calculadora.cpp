#include <iostream>
using namespace std;

int main(){
    int op = 0;
    cout<< "Ingresa la opcion deseada "<<endl;
    cout<<"Op 1 = Suma  " <<endl;
    cout<<"Op 2 = Resta " <<endl;
    cout<<"Op 3 = Multiplicacion "<<endl;
    cout<<"Op 4 = Division  "<<endl;

    cin>>op;

    int a = 0;
    int b = 0;

    if (op == 1){
        cout<<"Seleccionaste SUMA"<<endl;
        cout<<"Ingresa el primer numero ";
        cin>>a;
        cout<<"Ingresa el segundo numero ";
        cin>>b;

        int result = 0;
        result = a + b;
        cout<<"El resultado de la suma es " <<result<<endl;

    }
    else if (op == 2){
        cout<<"Seleccionaste RESTA"<<endl;
        cout<<"Ingresa el primer numero ";
        cin>>a;
        cout<<"Ingresa el segundo numero ";
        cin>>b;

        int result = 0;
        result = a - b;
        cout<<"El resultado de la resta es " <<result<<endl;

    }

    else if(op == 3){
        cout<<"Seleccionaste MULTIPLICACION"<<endl;
        cout<<"Ingresa el primer numero ";
        cin>>a;
        cout<<"Ingresa el segundo numero ";
        cin>>b;

        int result = 0;
        result = a * b;
        cout<<"El resultado de la multiplicacion es " <<result<<endl;

    }

    else if(op == 4){
    cout<<"Seleccionaste DIVISION"<<endl;
        cout<<"Ingresa el primer numero ";
        cin>>a;
        cout<<"Ingresa el segundo numero ";
        cin>>b;

        int result = 0;
        result = a / b;
        cout<<"El resultado de la division es " <<result<<endl;

    }
    else{
        cout<<"Opcion no disponible (1 - 4) ";
    }
    

}