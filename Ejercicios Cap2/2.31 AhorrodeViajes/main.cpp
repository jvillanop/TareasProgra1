#include <iostream>
using namespace std;

int main ()
{
  float km,costo,parqueo,prom,peaje;
  float gasokm,total,totalgaso;

  cout << "Ingrese los siguientes datos para comprobar el costo diario al trabajo. "<<endl<<endl;
  cout << "Ingrese el total de kilómetros por dia: ";
  cin >> km;
  cout << endl << "¿Cual es su costo por litro de gasolina?: ";
  cin>>costo;
  cout << "¿Cual es su promedio de kilometros por litro?: ";
  cin>>prom;
  cout << "Ingrese el precio del parqueo por dia: ";
  cin>>parqueo;
    cout << "¿De cuanto es su Peaje por dia? ";
  cin>>peaje;
  gasokm =costo/prom;
  totalgaso= gasokm*km;
  total=totalgaso+parqueo+peaje;
  cout<<"El costo diario por conducir al trabajo es: Q "<<total;
  return 0;
}
