#include <iostream>
using namespace std;

int Suma(int a , int b){
    return a + b;
}

int Resta(int a, int b){
    return a - b;
}

int Div(int a , int b){
    return a / b;
}

int Mult(int a, int b){
    return a * b;
}

int main(){
    int a = 17;
    int b = 99;

    cout << "El resultado de la suma es = " << Suma(a, b) << endl;
    cout << "El resultado de la resta es = " << Resta(a, b) << endl;
    cout << "El resultado de la división es = " << Div(a, b) << endl; 
    cout << "El resultado de la multiplicación es = " << Mult(a, b) << endl; 

    return 0;
}