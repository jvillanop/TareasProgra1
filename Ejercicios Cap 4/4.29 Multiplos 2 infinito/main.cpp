
// Programa que escribe multiplos de 2 dentro de un ciclo infinito
#include <iostream>

using namespace std;

int main()
{
    bool fin = false;
    int numero = 2;
    while (fin == false){ // Condicion del Ciclo que nunca cambia dentro del bloque
        if ((numero % 2) ==0) // Instrucción para validar si es multiplo de 2
            cout << numero<< endl; // Mostramos el numero multiplo de 2

        numero ++; // Aumentamos el valor del numero
    }
}
