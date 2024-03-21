// Ejercicio 3.15  Programa para establecer la fecha usando objetos
#include <iostream>

class Fecha {
private:
    int mes;
    int dia;
    int ano;

public:
    // Constructor
    Fecha(int m, int d, int a) {
        establecerMes(m);
        dia = d;
        ano = a;
    }

    // Funciones establecer y obtener para cada miembro de datos
    void establecerMes(int m) {
        mes = (m >= 1 && m <= 12) ? m : 1;
    }

    int obtenerMes() const {
        return mes;
    }

    void establecerDia(int d) {
        dia = d;
    }

    int obtenerDia() const {
        return dia;
    }

    void establecerAno(int a) {
        ano = a;
    }

    int obtenerAno() const {
        return ano;
    }

    // Función para mostrar la fecha
    void mostrarFecha() const {
        std::cout << obtenerMes() << "/" << obtenerDia() << "/" << obtenerAno() << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase Fecha
    Fecha fecha(18, 03, 2024);

    // Mostrar la fecha
    std::cout << "Fecha: ";
    fecha.mostrarFecha();

    return 0;
}
