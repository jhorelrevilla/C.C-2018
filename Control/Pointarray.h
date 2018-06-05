#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Punto.h"

class Pointarray
{
    public:

        Pointarray(int);
        Pointarray(Pointarray &a);
        void insertar(int,Punto);
        void eliminar(int);
        void imprime();
        ~Pointarray();
        ///////////////////////////
        int tamanio;
        Punto *arr;

};

#endif // POINTARRAY_H
