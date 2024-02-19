
// Programa que crea un cuadrado del tamaño ingresado por el usuario entre 1 y 20
#include <iostream>

using namespace std;

int main()
{
    int t = 0;


    cout << "Ingrese el tamaño de su cuadrado" << endl; // Solicitamnos el tamaño del cuadrado
    cin >> t ;

    if (t >0 && t < 21 ) // Realizamos la validación del tamaño entre 1 y 20
    {
        for (int i = 1 ; i <= t; i ++) // Creamos un ciclo para las filas del tamaño ingreso
        {
            for (int j = 1 ; j <= t; j ++) // Creamos un ciclo para las columnas del tamaño del cuadrado
            {
                if (i==1 || i == t) // Validamos si estamos en la primera o ultima fila para llenar con *
                    if ( j < t)     // Validamos si es el ultimo * para cambiar de linea
                        cout << "*";
                    else
                        cout << "*" << endl;
                else
                {
                if (j==1 || j == t) // Validamos si es la primera o ultima coulmna para escribir * o un espacio
                {
                    if (j==1)       // Validamos si es la ultima columna para cambiar de linea "endl"
                        cout<< "*" ;
                    else
                        cout << "*" <<endl;
                }else
                {
                    cout<<" " ;
                }
                }
            }

        }
    }else
        cout << endl << " Solamente se pueden crear cuadrados entre 1 y 20 dimensiones" << endl ; // Mosttramos el mensaje de error


}
