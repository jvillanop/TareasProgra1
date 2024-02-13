#include <iostream>
using namespace std;
//Lee dos numeros e identifica si el 1ro. es multiplo del 2do.
int main() {
    int n1,n2=0;
    int multiplo=0;

    // Solicitamos el ingreso
    cout <<"Ingrese 2 numeros enteros:\n";
    cin >> n1 >>n2;
    multiplo=n1%n2; //Mod (%) devuelve el residuo de la division

    //Mostramos el resultado
    if (multiplo==0)
        cout <<"El primero SI es multiplo del segundo " <<endl ;
    else
        cout << "El primero NO es multiplo del segundo  " << endl;

    return 0;
}
