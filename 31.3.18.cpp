#include <iostream>

using namespace std;


void calcuedad(){
    int edad;
    cout<<"ingresa la edad: ";cin>>edad;
    if(edad>0  && edad<30){
        cout<<"es una persona menor"<<endl;
    }
    if(edad>=30){
        cout<<"es una persona mayor"<<endl;
    }
}

void impnum(){
    int numhf;
    cout<<"numero para imprimir: ";cin>>numhf;
    for(int x=1;x<=numhf;++x){
        if(x<numhf){
            cout<<x<<",";
        }
        if(x==numhf){
            cout<<x;
        }
    }
}

void promnu(){
    int a;
    float n;
    int mayor=0;
    int menor=0;
    float prom=0;
    int cont=1;
    while(cont<=3){
        cout<<"numero para promediar";cin>>a;
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
    cout<<"promedio    "<<prom/3.0<<endl;
}

void multi2(){
    int num1,num2;
    cout<<"ingrese el primer numero: ";cin>>num1;
    cout<<"ingrese el segundo numero: ";cin>>num2;
    if(num1%2==0){
        cout<<"el primer numero es multiplo de 2"<<endl;
    }
    if(num2%2==0){
        cout<<"el segundo numero es multiplo de 2"<<endl;
        }
    if(num1%num2==0){
        cout<<"el primer numero es multiplo del segundo"<<endl;
    }
    else
        cout<<"el primer numero no es multiplo del segundo"<<endl;
    if((num1*num1)==num2){
        cout<<"el primero al cuadrado es igual al segundo"<<endl;
    }
}

void prim(){
    int a=0,i,n;
    cout<<"Ingrese numero"<<endl;
    cin>>n;
    for(i=1;i<(n+1);i++){
        if(n%i==0){
            a++;
        }
    }
    if(a!=2){
        cout<<"No es Primo"<<endl;
    }else{
        cout<<"Si es Primo"<<endl;
    }
}
void return_prim(int n){
    int a=0,i;
    for(i=1;i<(n+1);i++){
        if(n%i==0){
            a++;
        }
    }
    if(a==2){
        cout<<n<<endl;
    }
}
void numprim(int num){
    for(int i=2;i<=num;++i){
        return_prim(i);
    }
}
void numtab(){
    int numtab=0;
    cout<<"INGRESE EL NUMERO PARA TABULAR: ";cin>>numtab;
    if(numtab<=99999){
        int x1=numtab%10;
        int x2=numtab%100/10;
        int x3=numtab%1000/100;
        int x4=numtab%10000/1000;
        int x5=numtab%100000/10000;
        cout<<x5<<"\t"<<x4<<"\t"<<x3<<"\t"<<x2<<"\t"<<x1<<endl;
    }
    else
        cout<<"es un numero mayor a 5 digitos"<<endl;
}
void palindrome(){
    int num_palin=0;
    int cont=0;
    cout<<"INGRESE EL NUMERO ";cin>>num_palin;
     if(num_palin<=99999){
        int x1=num_palin%10;
        int x2=num_palin%100/10;
        int x4=num_palin%10000/1000;
        int x5=num_palin%100000/10000;
        if(x1==x5){
            cont+=1;
        }
        if(x2==x4){
            cont+=1;
        }
        if(cont>=2){
            cout<<"es palindrome"<<endl;
        }
        else{
            cout<<" no es palindrome"<<endl;
        }
     }
}
void aniobi(){
    int aniobi;
    cout<<"ingresa año: ";cin>>aniobi;

    if(!(aniobi%4) && (aniobi%400 || aniobi%100)){
        cout<<"es bisiesto"<<endl;
    }
    else
        cout<<"no es bisiesto"<<endl;
}
void fibona(){
    int fibo;
    int contant=1;
    int contact=0;
    int total;
    cout<<"numero para la sucesion de fibonacci: ";cin>>fibo;
    for(int x=0;x<fibo;++x){
        total=contant+contact;
        contant=contact;
        contact=total;
    }
    cout<<total<<endl;
}
int main()
{
    int x;
    calcuedad();
    impnum();
    cout<<"\n";
    promnu();
    multi2();
    prim();
    cout<<"calcular numero primo hasta: ";cin>>x;
    numprim(x);
    numtab();
    palindrome();
    aniobi();
    fibona();
    return 0;
}
