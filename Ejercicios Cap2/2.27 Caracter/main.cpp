#include <iostream>
using namespace std;
//Realiza una conversion de un caracter a su equivalente en la tabla ASCII
int main()
{
    char cr;
    cout<<"Ingrese el caracter que desea convertir " << endl;
    cin>>cr;
    cout <<"Su valor en ASCII es :"<<static_cast< int >(cr);

    return 0;
}
