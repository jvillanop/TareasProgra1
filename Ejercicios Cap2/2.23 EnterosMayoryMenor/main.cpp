#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5;
    int mayor, menor;

    // Obtener datos del usuario
    cout <<"Ingrese cinco numeros :\n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    mayor = menor = n1; // Hacemos esto para que establecer mayo y menor como el primero

    // condiciones para encontrar el mayor y el menor
    if (n2 > mayor)
        mayor = n2;
    if (n2 < menor)
        menor = n2;
    if (n3 > mayor)
        mayor = n3;
    if (n3 < menor)
        menor = n3;
    if (n4 > mayor)
        mayor = n4;
    if (n4 < menor)
        menor = n4;
    if (n5 > mayor)
        mayor = n5;
    if (n5 < menor)
        menor = n5;
    // Mostrar resultados en pantalla
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}
