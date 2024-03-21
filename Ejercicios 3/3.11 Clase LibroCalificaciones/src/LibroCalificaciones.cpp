
// Fig. 3.12: LibroCalificaciones.cpp
// Definiciones de las funciones miembro de LibroCalificaciones. Este archivo contiene
// implementaciones de las funciones miembro cuyo prototipo está en LibroCalificaciones.h.
#include <iostream>


#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones
using namespace std;

// el constructor inicializa nombreCurso con el objeto string suministrado como argumento
LibroCalificaciones::LibroCalificaciones( string nombre ): nombreCurso( nombre ) // inicializador de miembro para inicializar nombreCurso
{
    // cuerpo vacío
} // fin del constructor de LibroCalificaciones

// función para establecer el nombre del curso
void LibroCalificaciones::establecerNombreCurso( string nombre )
{
    nombreCurso = nombre; // almacena el nombre del curso en el objeto
} // fin de la función establecerNombreCurso

// función para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso; // devuelve el nombreCurso del objeto
} // fin de la función obtenerNombreCurso

// Ejercicio 11 : función para establecer el nombre del instructor
void LibroCalificaciones::establecerNombreInstructor( string nombre )
{
    nombreInstructor = nombre; // almacena el nombre del curso en el objeto
} // fin de la función establecerNombreInstructor

// Ejercicio 11 : función para obtener el nombre del instructor
string LibroCalificaciones::obtenerNombreInstructor() const
{
    return nombreInstructor; // devuelve el nombreCurso del objeto
} // fin de la función obtenerNombreInstructor


// muestra un mensaje de bienvenida al usuario de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje() const
{
    // llama a obtenerNombreCurso para obtener el nombreCurso Ejercicio 11 : y el nombre del instructor
    cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << "! Este curso es presentado por " << obtenerNombreInstructor << endl;

} // fin de la función mostrarMensaje
