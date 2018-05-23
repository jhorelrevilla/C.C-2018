#ifndef CHARVIRT_H
#define CHARVIRT_H


class charvirt
{
    public:
        charvirt(int b ,int *arraya);
        int imprimir();
        void borrar(int);
        void vacear();
        void agregar(int);
        void agregarpos(int, int);
        ~charvirt();
        int *a;
        int tamanio=0;
};

#endif // CHARVIRT_H
