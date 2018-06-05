#include "Controller.h"

Controller::Controller(int a){
    string nombre;
    int edad;
    if(a==1){
        int eleccion;
        cout<<"Como desea ordenar: "<<endl;
        cout<<"     1->Alfabetico"<<endl;
        cout<<"     2->NUMERO DE PACIENTE"<<endl;
        cout<<"     3->EDAD"<<endl;cin>>eleccion;
        /*while(eleccion!=0){
            switch(eleccion){
            case 1:
                eleccion=0;
                break;
            case 2:
                eleccion=0;
                break;
            case 3:
                eleccion=0;
                break;
            }
        }
        */
    }
    if(a==2){
        cout<<"ingresa nombre ";cin>>nombre;
        cout<<"ingresa edad ";cin>>edad;
        modelo.hosp.agregar(nombre,edad);
        //modelo.hosp.imprimir();


    }
    if(a==3){
        cout<<"3"<<endl;
    }
    if(a==4){
        cout<<"4"<<endl;
    }
    if(a==5){
        cout<<"5"<<endl;
    }
}
