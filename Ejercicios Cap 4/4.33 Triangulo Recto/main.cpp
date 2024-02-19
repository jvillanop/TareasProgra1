// Programa que indica si los lados ingresados para un triangulo pueden formar un triangulo rectangulo
#include <iostream>

using namespace std;


int main() {
    int a, b, c = 0;

    // Ingreso de tres enteros distintos de cero
    cout << "Ingrese tres enteros distintos de cero: " << endl;
    cin >> a >> b >> c;

    // Verificamos que los números ingresados son distintos de cero
    if (a == 0 || b == 0 || c == 0) {
        cout << "Los números deben ser distintos de cero." << endl;

    }else
    {
              // Verificamos si los lados forman un triángulo rectángulo
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Los lados ingresados pueden formar un triangulo rectangulo." << endl;
        } else {
            cout << "Los lados ingresados no pueden formar un triangulo rectangulo." << endl;
        }

    }


    return 0;
}



