// Programa que calcula el salario de acuerdo a las ventas
#include <iostream>

using namespace std;


int main()
{
    //Definimos los parametros de venta como constantes
    #define SALARIOSM 200
    #define COMISION 0.09
    //Declaración de variables
    float ventas, salario = 0;

    ventas = 1; //Establecemos 1 para que entre al primer ciclo

    while (ventas >= 0)
    {
    cout << "Ingrese las ventas en dolares ( marque -1 para salir ): " ;
    cin >> ventas ;

    if (ventas > 0) //Validamos el ingreso del usuario si es -1 no realiza el calculo
    {
    salario = SALARIOSM + (ventas * COMISION) ;// Realizamos el calculo del salario con base a las constantes

    cout <<  "El salario es: $" << salario  << endl; // Mostramos el salario calculado

    }

    }




}
