#include <iostream>
using namespace std;

int main() {
    int n = 10;  // Declarar la variable dentro de main()

    switch(n) {
        case 1:
            cout << "El numero de la variable es 1" << endl;
            break;
        default:
            cout << "error" << endl;
            break;  // Buenas prácticas: incluir break en default
    }

    return 0;
}