#include <iostream>
#include "LibroCalificaciones.h"

int main() {
    // Crear un objeto de la clase LibroCalificaciones
    LibroCalificaciones libro("Programacion 1", "Esduardo del Aguila");

    // Establecer el nombre del curso y del instructor
    libro.establecerNombreCurso("Programacion 1");
    libro.establecerNombreInstructor("Esduardo del Aguila");

    // Mostrar un mensaje de bienvenida
    libro.mostrarMensaje();

    return 0;
}
