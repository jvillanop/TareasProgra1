// Programa para averiguar que numero entre 10 ingresos es el mayor
#include <iostream>

using namespace std;

int main()
{
   int contador, numero, mayor = 0; // Declaraci�n de variables

   while (contador < 10) // Ciclo de 0 a 9 = 10 veces
   {
       cout << "Ingrese el numero por favor : " ; // Solicitamos el ingreso del numero
       cin >> numero ;

       if (contador==0) // En la primera ejecuci�n guardamos el primer ingreso en la variable mayor
        mayor = numero;

       if (numero > mayor) // comparamos si el ingreso es mayor al numero guardado.
        mayor = numero;

        contador ++; // Aumentamos el valor del centinela
   }

   cout <<endl<<endl<< "El numero mayor es : " << mayor ; // Mostramos el numero mayor

}


