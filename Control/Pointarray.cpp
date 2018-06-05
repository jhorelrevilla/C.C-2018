#include "Pointarray.h"
#include <iostream>

using namespace std;
Pointarray::Pointarray(int a)
{
   tamanio=a;
   arr=new Punto[tamanio];
}

Pointarray::Pointarray(Pointarray &a){
    a.tamanio=this->tamanio;
    a.arr=this->arr;
}

void Pointarray::insertar(int pos,Punto nuevo){
    Punto *nuarr=new Punto[tamanio+1];
    for(int i=0;i<tamanio;i++){
        nuarr[i]=arr[i];
    }

    tamanio++;
    for(int i=0;i<pos;i++){
        Punto temp=nuarr[tamanio-pos-1];
        nuarr[tamanio-pos-1]=nuarr[tamanio-pos-2];
        nuarr[tamanio-pos-2]=temp;
    }
    nuarr[pos]=nuevo;
    arr=nuarr;
}
void Pointarray::eliminar(int posicion){
    Punto *nuevo= new Punto [tamanio-1];
    tamanio--;
    for(int i=0;i<posicion;i++){
        nuevo[i]=arr[i];
    }
    for(int i=posicion;i<tamanio;i++)
    {
        nuevo[i]=arr[i+1];
    }
    delete [] arr;
    arr=nuevo;
}

void Pointarray::imprime(){
    for(int i=0;i<tamanio;i++){
        cout<<"arr ["<<i<<"]:"<<endl;
        cout<<arr[i].get_x()<<endl;
        cout<<arr[i].get_y()<<endl;
    }
}
Pointarray::~Pointarray()
{
    delete []arr;
}
