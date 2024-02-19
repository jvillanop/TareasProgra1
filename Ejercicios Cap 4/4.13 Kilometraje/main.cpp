// Programa que registra el abastecimiento y rendimiento
#include <iostream>

using namespace std;

int main()
{
    //Declaración de variables
    float kilometros, litros , kpl , totalkm , totallts, totalkpl = 0;


    kilometros = 1; //Establecemos 1 para que entre al primer ciclo

    while (kilometros > 0)
    {
    cout << "Ingrese los kilometros usados ( marque -1 para salir ): " ;
    cin >> kilometros ;

    if (kilometros > 0) //Validamos el ingreso del usuario si es -1 no realiza las siguientes instrucciones
    {
    cout << "Ingrese los litros: " ;
    cin >> litros ;

    kpl = kilometros / litros ;// Realizamos el calculo actual de kilometros por galon

    //Realizamos el calculo acumulado de kilometros por galon
    totalkm += kilometros;
    totallts += litros;
    totalkpl = totalkm / totallts;

    cout << endl << "KPL en este abastecimiento: " << kpl  << endl; // Mostramos el rendimiento actual
    cout << "Total KPL :" << totalkpl << endl << endl; // Mostramos el rendimiento acumulado
    }

    }




}
