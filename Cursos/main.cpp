#include <iostream>
#include "Curso.h"
using namespace std;

int main()
{

    //Curso mat[5]={Curso(10,"ICC"),Curso(15,"CALCULO"),Curso(5,"ED II"),Curso(18,"ABSTRACTA"),Curso(20,"CCOMP II")};
    Curso a(10,"ICC");
    a.setearNotas(5);
//    a.invertir();
//    a.ObtenerNotas();
//    cout<<"\n";
//    cout<<a.SumNotas();

    cout<<a.MayorPrim()<<endl;
    cout<<a.MenorPrim()<<endl;
    return 0;
}
