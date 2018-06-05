#include "Punto.h"

Punto::Punto()
{
    x=0;
    y=0;
}
Punto::Punto(float a,float b){
    x=a;
    y=b;
}
float Punto::get_x(){
    return x;
}
void Punto::set_x(float a){
    x=a;
}
float Punto::get_y(){
    return y;
}
void Punto::set_y(float a){
    y=a;
}
