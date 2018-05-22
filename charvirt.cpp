#include "charvirt.h"
#include <iostream>
using namespace std;

charvirt::charvirt(int b)
{
    tamanio=b;
    a= new int[tamanio];
}
void charvirt::rellenar(){
    for(int i=0;i<tamanio;i++){
        cin>>a[i];
    }
}
int charvirt::imprimir(){
    for(int i=0;i<=tamanio;i++){
        cout<<a[i];
    }
}
void charvirt::borrar(int posicion){
    if(posicion<=tamanio){
        for(int i=posicion;i<tamanio;i++){
            a[i]=a[i+1];
        }
        tamanio--;
    }
}
void charvirt::agregarpos(int elem, int post){
    int *nuevo=new int [tamanio+1];
    tamanio++;
    for(int i=post;i<tamanio;i++){
       a[i]=a[i+1];
    }
    a[tamanio-post]=elem;
    delete [] a;
    *a=*nuevo;
}
void charvirt::anular(){
    tamanio=0;
    delete [] a;   
}  
void charvirt::agregar(int valor){
    int *nuevo= new int [tamanio+1];
    tamanio++;
    for(int i=0;i<tamanio;i++){
        nuevo[i]=a[i];   
    }
    a[tamanio-1]=valor;
    delete [] a;
    *a=*nuevo;
}
