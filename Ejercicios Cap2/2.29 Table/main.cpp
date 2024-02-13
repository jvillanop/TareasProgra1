#include <iostream>
using namespace std;
//calcula los cuadrados y cubos de los enteros del 0 al 10. Use tabuladores para imprimir la siguiente tabla ordenada de valores:
int main()
{

    cout<<"\t-----------\t-----------\n";
    cout<<"\t-----------\t-----------\n";
    cout<<"\t-----------\t-----------\n";
    cout<<" \tCuadrados y cubos del 0 al 10 \n";
    cout<<"\t-----------\t-----------\n";
    cout<<"\tEntero\tCuadrado\tCubo\n";
    for (int i = 0; i <11 ; i ++){
    cout<<"\t"<< i<<"\t" <<i*i<<"\t\t"<< i*i*i<<endl;
    }

    cout<<"\t-----------\t-----------\n";
    cout<<"\t-----------\t-----------\n";
    cout<<"\t-----------\t-----------\n";

    return 0;
}
