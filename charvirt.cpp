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
    int *nuevo= new int[0];
    delete [] a;
    a=nuevo;
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
///////////////////////////
float charvirt::Promedio(){
    float prom=0;
    for(int i=0;i<tamanio;i++){
        prom+=a[i];
    }
    return prom/tamanio;
}
void charvirt::ordenarnotas(){
    int cont=1;
    while(cont!=0){
        cont=0;
        for(int i=0;i<tamanio;i++){
            if(a[i]>=a[i+1]){
                float b=a[i];
                a[i]=a[i+1];
                a[i+1]=b;
                cont+=1;
            }
        }
    }
}
bool charvirt::prim(int a){
    int prim1=0;
    for(int i=2;i<=a;i++){
        if(a%i==0){
            prim1++;
        }
    }
    if(prim1!=2){
        return false;
    }
    else
        return true;
}
int charvirt::MayorPrim(){
    int mayp=0;
    for(int i=0;i<tamanio;i++){
        if(prim(a[i])){
            mayp=a[i];
        }
    }
    for(int i=0;i<tamanio;i++){
        if(prim(a[i])){
            if(a[i]>mayp){
                mayp=a[i];
            }
        }
    }
    return mayp;
}
int charvirt::MenorPrim(){
    int menp=0;
    for(int i=0;i<tamanio;i++){
        if(prim(a[i])){
            menp=a[i];
        }
    }
    for(int i=0;i<tamanio;i++){
        if(prim(a[i])){
            if(a[i]<menp){
                menp=a[i];
            }
        }
    }
    return menp;
}
int charvirt::SumNotas(){
    int sum=0;
    for(int i=0;i<tamanio;i++){
        sum+=a[i];
    }
    return sum;
}
void charvirt::invertir(){
    int b;
    for(int i=0;i<=(tamanio/2);i++){
        if(i!=(tamanio-i-1)){
            b=a[i];
            a[i]=a[tamanio-i-1];
            a[tamanio-i-1]=b;
        }
    }
}
//////////////////




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
int charvirt::Obtenermayor(){
    int mayor=a[0];
    for(int i=0;i<tamanio;i++){
        if(mayor<=a[i]){
            mayor=a[i];
        }
    }
    return mayor;
}

charvirt::~charvirt(){
    delete []a;
}
