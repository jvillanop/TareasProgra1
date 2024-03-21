#include <iostream>
#include <string>

using namespace std ;

class Factura {
private:
    string numeroPieza;
    string descripcionPieza;
    int cantidad;
    int precioPorArticulo;

public:
    // Constructor
    Factura(string numeroPieza, string descripcionPieza, int cantidad, int precioPorArticulo)
        : numeroPieza(numeroPieza), descripcionPieza(descripcionPieza), cantidad(cantidad), precioPorArticulo(precioPorArticulo) {}

    // Funciones establecer y obtener para cada miembro de datos
    void establecerNumeroPieza(string numero) {
        numeroPieza = numero;
    }

    string obtenerNumeroPieza() const {
        return numeroPieza;
    }

    void establecerDescripcionPieza(string descripcion) {
        descripcionPieza = descripcion;
    }

    string obtenerDescripcionPieza() const {
        return descripcionPieza;
    }

    void establecerCantidad(int cantidad) {
        this->cantidad = (cantidad < 0) ? 0 : cantidad;
    }

    int obtenerCantidad() const {
        return cantidad;
    }

    void establecerPrecioPorArticulo(int precio) {
        precioPorArticulo = (precio < 0) ? 0 : precio;
    }

    int obtenerPrecioPorArticulo() const {
        return precioPorArticulo;
    }

    // Función para obtener el monto de la factura
    int obtenerMontoFactura() const {
        return (cantidad < 0 || precioPorArticulo < 0) ? 0 : cantidad * precioPorArticulo;
    }
};

int main() {
    // Crear un objeto de la clase Factura
    Factura factura("112233", "Martillo", 10, 55);

    // Mostrar información de la factura
    cout << "Número de articulo: " << factura.obtenerNumeroPieza() << endl;
    cout << "Descripcion del articulo: " << factura.obtenerDescripcionPieza() << endl;
    cout << "Cantidad: " << factura.obtenerCantidad() << endl;
    cout << "Precio por articulo: " << factura.obtenerPrecioPorArticulo() << endl;
    cout << "Monto de la factura: Q" << factura.obtenerMontoFactura() << endl;

    return 0;
}
