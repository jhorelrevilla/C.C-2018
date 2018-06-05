#include <iostream>
#include "Pointarray.h"
using namespace std;
class Persona{
public:
    virtual void info()=0;
private:
    char* nombre;
    int edad;
};
class Varon:public Persona{
public:
    bool corbata;
    Varon(char* a,int b,bool c){
        nombre=a;
        edad=b;
        corbata=c;
    }
    void info(){
        cout<<nombre<<endl;
        cout<<edad<<endl;
        cout<<corbata<<endl;
    }
};
int main()
{

    Pointarray a(3);
    Punto nuevo(1,2);
    a.insertar(2,nuevo);
    a.eliminar(2);
    a.imprime();
    /*
    Varon v("juan",30,1);
    v.info();
    */


    return 0;
}
