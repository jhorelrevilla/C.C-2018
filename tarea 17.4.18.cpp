#include <iostream>

using namespace std;
////////////1
int esPerfecto(int x){
    int sumdi=0;
    for(int i=1;i<x;i++){
        if(x%i==0){
            sumdi+=i;
        }
    }
    if(sumdi==x){
        return 1;
    }
    else
        return 0;
}


////////////2

 int esPrimo(int x){
     int a=0;
     for(int i=1;i<=x;i++){
        if(x%i==0){
            a+=1;
        }
    }
     if(a==2){
        return 1;
     }
     else
        return 0;
 }

////////////3
int Potencia(int base,int exponente){
    if(exponente==1){
        return base;
    }
    return base * Potencia(base,exponente-1);
}
////////////4

int intercamva(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}

int intercamvabits(int &a,int &b){
    a^=b;
    b^=a;
    a^=b;
}

////////////
int main()
{
    /*for(int i=1;i<=10000;i++){
        if(esPerfecto(i)){
            cout<<"Numero: "<<i<<endl;
            for(int z=1;z<i;z++){
                if(i%z==0){
                    cout<<"Divisor: "<<z<<endl;
                }
            }
        }
    }

    int a;
    int cont=0;
    cout<<"num prim";cin>>a;
    for(int i=1;i<10000;i++){
        if (cont<=a){
            if(esPrimo(i)){
                cout<<i<<endl;
                cont++;
            }
        }

    }

    cout<<Potencia(5,3);
    */
    int a =10;
    int b=11;
    intercamvabits(a,b);
    cout<<a<<endl;
    cout<<b;





    return 0;
}
