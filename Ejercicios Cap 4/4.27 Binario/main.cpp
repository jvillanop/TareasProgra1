// Programa que convierte un numero binario a su equivalente decimal

#include <iostream>
using namespace std;

int main() {
    long long bin;
    int d  , base = 1, res;

    // Solicitamos al usuario ingresar el n�mero binario
    cout << "Ingrese un n�mero binario: ";
    cin >> bin;

    // Convertir el n�mero binario a decimal
    while (bin > 0) {
        res = bin % 10;
        d += res * base;
        bin /= 10;
        base *= 2;
    }

    // Mostramos el equivalente en decimal
    cout << "El equivalente es: " << d << endl;

    return 0;
}
