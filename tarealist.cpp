#include <iostream>
#include "charvirt.h"
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};

    charvirt a(5,arr);
    a.imprimir();
    cout<<"\n";
    a.agregar(7);
    a.imprimir();
    cout<<"\n";
    a.agregarpos(6,3);
    cout<<"\n";
    a.imprimir();
    a.borrar(7);

    return 0;
}
