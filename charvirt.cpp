#include "charvirt.h"
#include <iostream>
using namespace std;

charvirt::charvirt(int b,int *arraya){
    tamanio=b;
    a= arraya;
}

int charvirt::imprimir(){
    for(int i=0;i<tamanio;i++){
        cout<<a[i];
    }
}
void charvirt::borrar(int posicion){
    int *nuevo= new int [tamanio-1];
    tamanio--;
    for(int i=0;i<posicion;i++){
        nuevo[i]=a[i];
    }
    for(int i=posicion;i<tamanio;i++)
    {
        nuevo[i]=a[i+1];
    }
    delete [] a;
    a=nuevo;
}
void charvirt::vacear(){
    delete [] a;
    tamanio=0;
}
void charvirt::agregar(int valor){
    int *nuevo= new int [tamanio+1];
    tamanio++;
    for(int i=0;i<tamanio;i++){
        nuevo[i]=a[i];
    }
    nuevo[tamanio-1]=valor;
    delete [] a;
    a=nuevo;
}

void charvirt::agregarpos(int elem, int pos){
    int *nuevo= new int [tamanio+1];
    tamanio++;
    for(int i=0;i<pos;i++){
        nuevo[i]=a[i];
    }
    for(int i=pos;i<tamanio;i++){
        nuevo[i+1]=a[i];
    }
    nuevo[pos]=elem;
    delete [] a;
    a=nuevo;
}
charvirt::~charvirt(){
    delete []a;
}
