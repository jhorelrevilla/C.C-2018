#include <iostream>

using namespace std;

int main()
{
    int num_prim;
    int contador3=0;
    cout<<"ingrese la cantidad de numeros primos a imprimir :3 ";cin>>num_prim;
    for(int x=2;contador3<=num_prim-1;x++){
        if(x==2 || x==3 || x==5 || x==7){
            cout<<contador3<<" "<<x<<" "<<endl;
            contador3+=1;
        }
        if(x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0){
            cout<<contador3<<" "<<x<<" "<<endl;
            contador3+=1;
        }
    }
    return 0;
}
