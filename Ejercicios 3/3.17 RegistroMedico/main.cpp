
// Ejercicio 3.17

#include <iostream>
#include <string>
#include <utility>
#include <cmath>

using namespace std;

class PerfilMedico {
private:
    string mPrimerNombre;
    string mApellido;
    char mSexo;
    int mDiaNacimiento;
    int mMesNacimiento;
    int mAnoNacimiento;
    int mAltura; // en centímetros
    double mPeso; // en kilogramos

public:
    // Constructor
    PerfilMedico(string nombre, string apellido, char sexo, int dia, int mes, int ano, int altura, double peso) {
        mPrimerNombre = nombre;
        mApellido = apellido;
        mSexo = sexo;
        mDiaNacimiento = dia;
        mMesNacimiento = mes;
        mAnoNacimiento = ano;
        mAltura = altura;
        mPeso = peso;
    }

    // Funciones establecer y obtener para cada atributo
    void establecerPrimerNombre(string nombre) {
        mPrimerNombre = nombre;
    }

    string obtenerPrimerNombre() const {
        return mPrimerNombre;
    }

    void establecerApellido(string apellido) {
        mApellido = apellido;
    }

    string obtenerApellido() const {
        return mApellido;
    }

    void establecerSexo(char sexo) {
        mSexo = sexo;
    }

    char obtenerSexo() const {
        return mSexo;
    }

    void establecerFechaNacimiento(int dia, int mes, int ano) {
        mDiaNacimiento = dia;
        mMesNacimiento = mes;
        mAnoNacimiento = ano;
    }

    int obtenerDiaNacimiento() const {
        return mDiaNacimiento;
    }

    int obtenerMesNacimiento() const {
        return mMesNacimiento;
    }

    int obtenerAnoNacimiento() const {
        return mAnoNacimiento;
    }

    void establecerAltura(int altura) {
        mAltura = altura;
    }

    int obtenerAltura() const {
        return mAltura;
    }

    void establecerPeso(double peso) {
        mPeso = peso;
    }

    double obtenerPeso() const {
        return mPeso;
    }

    // Funciones para calcular la edad, el BMI y la frecuencia cardiaca máxima
    int obtenerEdad(int diaActual, int mesActual, int anoActual) const {
        // Calcular la edad
        int edad = anoActual - mAnoNacimiento;
        if (mesActual < mMesNacimiento || (mesActual == mMesNacimiento && diaActual < mDiaNacimiento)) {
            edad--;
        }
        return edad;
    }

    double calcularBMI() const {
        // Calcular el BMI
        return (mPeso * 10000) / (mAltura * mAltura); // Altura en metros
    }

    int calcularFrecuenciaCardiacaMaxima(int anoActual) const {
        // Calcular la frecuencia cardiaca máxima
        return 220 - obtenerEdad(1, 1, anoActual);
    }

    pair<int, int> calcularRangoFrecuenciaCardiacaEsperada(int anoActual) const {
        // Calcular el rango de frecuencia cardiaca esperada
        int maximo = static_cast<int>(0.85 * calcularFrecuenciaCardiacaMaxima(anoActual));
        int minimo = static_cast<int>(0.50 * calcularFrecuenciaCardiacaMaxima(anoActual));
        return pair<int, int>(minimo, maximo);
    }
};

int main() {
    string nombre, apellido;
    char sexo;
    int dia, mes, ano, altura;
    double peso;

    // Obtener información de la persona
    cout << "Ingrese el primer nombre: ";
    cin >> nombre;
    cout << "Ingrese el apellido: ";
    cin >> apellido;
    cout << "Ingrese el sexo (M/F): ";
    cin >> sexo;
    cout << "Ingrese la fecha de nacimiento (dd mm aaaa): ";
    cin >> dia >> mes >> ano;
    cout << "Ingrese la altura en centimetros: ";
    cin >> altura;
    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;

    // Crear objeto de la clase PerfilMedico
    PerfilMedico paciente(nombre, apellido, sexo, dia, mes, ano, altura, peso);

    // Obtener la fecha actual
    int diaActual, mesActual, anoActual;
    cout << "Ingrese la fecha actual (dd mm aaaa): ";
    cin >> diaActual >> mesActual >> anoActual;

    // Imprimir información
    cout << "\nInformación del paciente:" << endl;
    cout << "Nombre: " << paciente.obtenerPrimerNombre() << " " << paciente.obtenerApellido() << endl;
    cout << "Sexo: " << paciente.obtenerSexo() << endl;
    cout << "Fecha de nacimiento: " << paciente.obtenerDiaNacimiento() << "/" << paciente.obtenerMesNacimiento() << "/" << paciente.obtenerAnoNacimiento() << endl;
    cout << "Altura: " << paciente.obtenerAltura() << " cm" << endl;
    cout << "Peso: " << paciente.obtenerPeso() << " kg" << endl;

    // Calcular y mostrar edad, BMI y frecuencia cardiaca
    int edad = paciente.obtenerEdad(diaActual, mesActual, anoActual);
    cout << "\nEdad: " << edad << " años" << endl;

    double bmi = paciente.calcularBMI();
    cout << "Índice de Masa Corporal (BMI): " << bmi << endl;
    cout << "Valores de BMI:" << endl;
    cout << "Bajo peso: menos de 18.5" << endl;
    cout << "Normal: entre 18.5 y 24.9" << endl;
    cout << "Sobrepeso: entre 25 y 29.9" << endl;
    cout << "Obeso: 30 o más" << endl;
}
