#include <iostream>
#include <charvirt.h>
using namespace std;

int main()
{
    charvirt a(5);
    a.rellenar();
    cout<<"\n";
    a.imprimir();
    a.borrar(0);
    cout<<"\n";
    a.imprimir();
    cout<<"\n";
    a.agregar(0);
    a.imprimir();
    return 0;
}
