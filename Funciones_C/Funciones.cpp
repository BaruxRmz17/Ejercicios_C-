#include <iostream>
using namespace std;


int Suma(int a, int b){
    return a + b;
}

int Resta(int a , int b){
    return a - b;
}

int Mult(int a, int b){
    return a * b;
}

int Div(int a, int b){
    return a / b;
}




int main(){
    int a = 20;
    int b = 5;

    cout<<"El resultado de la suma es " <<Suma(a,b)<<endl;
    cout<<"El resultado de la resta es " <<Resta(a,b)<<endl;
    cout<<"El resultado de la multiplicacion es " <<Mult(a,b)<<endl;
    cout<<"El resultado de la Divicion es " <<Div(a,b)<<endl;

    return 0;


}
