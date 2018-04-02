#include <iostream>

using namespace std;
int main()
{
    /*int x=0;
    cout<<"INGRESE EL NUMERO ";cin>>x;
    if(x<=99999){
        int x1=x%10;
        int x2=x%100/10;
        int x3=x%1000/100;
        int x4=x%10000/1000;
        int x5=x%100000/10000;
        cout<<x5<<" "<<x4<<" "<<x3<<" "<<x2<<" "<<x1<<endl;
        //////////////////////////
        for(int i =10000;i>=1;i/=10){
            int tmp=x/i;
            cout<<tmp<<" ";
            x=x%i;
        }
        /////////////////////////
    }
    else
        cout<<"es un numero mayor a 5 digitos"<<endl;
    //43218
    */
    //////////2///////////////
    int a;
    float n;
    int mayor=0;
    int menor=0;
    int prom=0;
    int cont=1;
    cout<<"ingrese el numero de digitos ";cin>>n;
    while(cont<=n){
        cout<<"numero ";cin>>a;
        if(a>mayor){
            mayor=a;
        }
        if(a<=menor || a==1){
            menor=a;
        }
        prom+=a;
        cont+=1;
    }
    cout<<"mayor    "<<mayor<<endl;
    cout<<"menor    "<<menor<<endl;
    cout<<"promedio    "<<prom/n<<endl;
    /////////////fin 2////////////

    /*
    /////////////palindrome////////////
    int x=0;
    int cont=0;
    cout<<"INGRESE EL NUMERO ";cin>>x;
     if(x<=99999){
        int x1=x%10;
        int x2=x%100/10;
        int x4=x%10000/1000;
        int x5=x%100000/10000;
        if(x1==x5){
            cont+=1;
        }
        if(x2==x4){
            cont+=1;
        }
        if(cont>=2){
            cout<<"es palindrome"<<endl;
        }
     }
    */
    //////////////////////////


    return 0;
}
