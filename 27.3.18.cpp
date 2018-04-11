#include <iostream>

using namespace std;


bool calcuedad(int edad){
    (edad>0  && edad<30)? true:false;
}

void impnum(int numhf){
    for(int x=1;x<=numhf;++x){
        if(x<numhf){
            cout<<x<<",";
        }
        if(x==numhf){
            cout<<x;
        }
    }
}

void promnu(int a,int b, int c, int &mayor, int &menor,float &promedio){
    promedio=(a+b+c)/3;
    if(a>b){
        mayor=a;
    }
    else{
        mayor=b;
    }
    if(c>mayor){
        mayor=c;
    }
    ////////
    if(a<b){
        menor=a;
    }
    else{
        menor=b;
    }
    if(c<menor){
        menor=c;
    }

}

char* multi2(int num1,int num2){
    if(num1%2==0){
        return "el primer numero es multiplo de 2";
    }
    if(num2%2==0){
        return "el segundo numero es multiplo de 2";
        }
    if(num1%num2==0){
        return "el primer numero es multiplo del segundo";
    }
    else
        return "el primer numero no es multiplo del segundo";
    if((num1*num1)==num2){
        return "el primero al cuadrado es igual al segundo";
    }
}

bool prim(int n){
    int a=0;
    for(int i=1;i<(n+1);i++){
        if(n%i==0){
            a++;
        }
    }
    if(a!=2){
        return 1;
    }else{
        return 0;
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
void numtab(int numtab=0){
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
bool  palindrome(int num_palin=0){
    int cont=0;
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
            return 1;
        }
        else{
            return 0;
        }
     }
}
bool aniobi(int aniobi){
    if(!(aniobi%4) && (aniobi%400 || aniobi%100)){
        return 1;
    }
    else
        return 0;
}
void fibona(int fibo,int &total){
    int contant=1;
    int contact=0;
    for(int x=0;x<fibo;++x){
        total=contant+contact;
        contant=contact;
        contact=total;
    }
}
void Factorial(int num,int total=1){
    for(int i=1;i<num+1;i++){
        total*=i;
    }
    cout<<"total "<<total;
}
int main()
{
    int mayor;
    int menor;
    float promedio;
    promnu(1,2,3,mayor,menor,promedio);
    cout<<mayor<<endl;
    cout<<menor<<endl;
    cout<<promedio<<endl;
    /*
    int x;
    calcuedad();
    impnum();
    cout<<"\n";

    multi2();
    prim();
    cout<<"calcular numero primo hasta: ";cin>>x;
    numprim(x);
    numtab();
    palindrome();
    aniobi();
    fibona();
    */
    //cout<<pal();
    return 0;
}
