#ifndef CHARVIRT_H
#define CHARVIRT_H


class charvirt
{
    public:
        charvirt(int);
        void rellenar();
        int imprimir();
        void borrar(int);
        void agregar(int);
        void agregarpos(int, int);
        int *a;
        int tamanio=0;
};

#endif // CHARVIRT_H
