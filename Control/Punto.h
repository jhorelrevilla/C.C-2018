#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    public:
        Punto();
        Punto(float,float);
        float get_x();
        float get_y();
        void set_x(float);
        void set_y(float);
    private:
        float x,y;

};

#endif // PUNTO_H
