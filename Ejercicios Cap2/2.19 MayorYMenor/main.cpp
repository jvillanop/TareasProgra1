//Recibe tres enteros del teclado e imprima la suma,promedio, producto, menor y mayor de estos números

#include <iostream>
using namespace std;

int main()
{
    //Declaracion de variables;
    int v1,v2,v3=0;
    int suma=0;
    float promedio=0;
    int menor,mayor=0;
    int cod=0;
    //Ingreso de datos por el usuario
    cout<<"---Bienvenido---\n";
    cout<<"Ingrese sus 3 numeros enteros: \n";
    cin>>v1>>v2>>v3;
    cout<<"Ingrese el codigo de su producto: \n";
    cin>>cod;
    //proceso logico y aritmetico de datos
    suma=v1+v2+v3;
    promedio=suma/3;
    mayor = v1;
    menor = v1;
    if (v2 > mayor)
        mayor = v2;
    else if (v2 < menor)
        menor = v2;

    if (v3 > mayor)
        mayor =v3;
     else if (v3 < menor)
        menor = v3;

    cout<<"La suma es:"<<suma<<endl;
    cout<<"El promedio  es:"<<promedio<<endl;
    cout<<"El codigo es:"<<cod<<endl;
    cout<<"El menor es:"<<menor<<endl;
    cout<<"El mayor es:"<<mayor<<endl;



    return 0;
}
