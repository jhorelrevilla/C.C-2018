#include "Curso.h"
#include <iostream>
#include <sstream>
using namespace std;



Curso::Curso(int a, char* b)
{
    nota=a;
    nombre=b;
}
char* Curso::get_nombre(){
    return nombre;
}
int Curso::get_nota(){
    return nota;
}

void Curso::set_nombre(char* a){
    nombre=a;
}
void Curso::set_nota(int a){
    nota=a;
}
void Curso::obtenerinfo(){
    cout<<"el nombre del curso es: "<<nombre<<"la nota es: "<<nota;

}
void Curso::setearNotas(int tam){
    cantnotas=tam;
    notas= new int [cantnotas];
    for(int i=0;i<cantnotas;i++){
        cout<<i<<" notas: ";cin>>notas[i];
    }

}

void Curso::ObtenerNotas(){
    for(int i=0;i<cantnotas;i++){
        cout<<notas[i]<<" ";
    }
}

float Curso::Obtenermayor(){
    float mayor=notas[0];
    for(int i=0;i<5;i++){
        if(mayor<=notas[i]){
            mayor=notas[i];
        }
    }
    return mayor;
}
float Curso::ObtenerMenor(){
    float menor=notas[0];
    for(int i=0;i<cantnotas;i++){
        if(menor>=notas[i]){
            menor=notas[i];
        }
    }
    return menor;
}

float Curso::Promedio(){
    float prom=0;
    for(int i=0;i<cantnotas;i++){
        prom+=notas[i];
    }
    return prom/cantnotas;
}
void Curso::ordenarnotas(){
    int cont=1;
    while(cont!=0){
        cont=0;
        for(int i=0;i<cantnotas;i++){
            if(notas[i]>=notas[i+1]){
                float a=notas[i];
                notas[i]=notas[i+1];
                notas[i+1]=a;
                cont+=1;
            }
        }
    }
}

bool Curso::prim(int a){
    int prim1=0;
    for(int i=1;i<=a;i++){
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

int Curso::MayorPrim(){
    int mayp=0;
    for(int i=0;i<cantnotas;i++){
        if(prim(notas[i])){
            mayp=notas[i];
        }
    }
    for(int i=0;i<cantnotas;i++){
        if(prim(notas[i])){
            if(notas[i]>mayp){
                mayp=notas[i];
            }
        }
    }
    return mayp;
}


int Curso::MenorPrim(){
    int menp=0;
    for(int i=0;i<cantnotas;i++){
        if(prim(notas[i])){
            menp=notas[i];
        }
    }
    for(int i=0;i<cantnotas;i++){
        if(prim(notas[i])){
            if(notas[i]<menp){
                menp=notas[i];
            }
        }
    }
    return menp;
}
int Curso::SumNotas(){
    int sum=0;
    for(int i=0;i<cantnotas;i++){
        sum+=notas[i];
    }
    return sum;
}
void Curso::invertir(){
    int a;
    for(int i=0;i<=(cantnotas/2);i++){
        if(i!=(cantnotas-i-1)){
            a=notas[i];
            notas[i]=notas[cantnotas-i-1];
            notas[cantnotas-i-1]=a;
        }
    }
}





















