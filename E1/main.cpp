#include <iostream>
using namespace std;

int Suma1(int a , int b){
    
    return a + b;
}

int Resta(int a , int b){
    return a - b;
}

int Mult(int a , int b){
    return a * b;
}

int Div(int a , int b){
    return b/a;
}

int main(){
    int a = 9;
    int b = 21;
    
    cout<<"El resultado de la suma es = " <<Suma1(a, b)<<endl;
    cout<<"El resultado de la resta es = " <<Resta(a,b)<<endl;
    cout<<"El resultado de la multiplicacion es = " <<Mult(a,b)<<endl;
    cout<<"El resultado de la division es = " <<Div(a,b)<<endl;

    
    
    return 0;
}
