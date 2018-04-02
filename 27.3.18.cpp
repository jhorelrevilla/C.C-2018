#include <iostream>

using namespace std;
void may(float a,float b,float c,float d,float e){
    int may=0;
    if(a>b){
        may=a;
    }
    else
        may=b;
    if(c>may){
        may=c;
    }
    if(d>may){
        may=d;
    }
    if(e>may){
        may=e;
    }
    cout<<"mayor    "<<may<<endl;
}

void men(float a,float b,float c,float d,float e){
    float may=0;
    if(a<b){
        may=a;
    }
    else
        may=b;
    if(c<may){
        may=c;
    }
    if(d<may){
        may=d;
    }
    if(e<may){
        may=e;
    }
    cout<<"menor    "<<may<<endl;
}



int main(){
    //////////////1._///////////////
    int p;
    int r;
    /*int q;
    int w;
    int e;
    */
    cout<<"1 ";cin>>p;
    cout<<"2 ";cin>>r;
    /*cout<<"3 ";cin>>q;
    cout<<"4 ";cin>>w;
    cout<<"5 ";cin>>e;
    //may(p,r,q,w,e);
    //men(p,r,q,w,e);
    if(p%2){
        cout<<p<<" es impar"<<endl;
    }
    else
        cout<<p<<" es par"<<endl;
        //////////////
    if(r%2){
        cout<<r<<" es impar"<<endl;
    }
    else
        cout<<r<<" es par"<<endl;
        //////////////
    if(q%2){
        cout<<q<<" es impar"<<endl;
    }
    else
        cout<<q<<" es par"<<endl;
        //////////////
    if(w%2){
        cout<<w<<" es impar"<<endl;
    }
    else
        cout<<w<<" es par"<<endl;
        //////////////
    if(e%2){
        cout<<e<<" es impar"<<endl;
    }
    else
        cout<<e<<" es par"<<endl;
    */
    if(p%r==0){
        cout<<p<<" es multiplo de "<<r<<endl;
    }
    else
        cout<<p<<" no es multiplo de "<<r<<endl;
    if(r%p==0){
        cout<<r<<" es multiplo de "<<p<<endl;
    }
    else
        cout<<r<<" no es multiplo de "<<p<<endl;



    /*int z=x%y;
    int a=x/y;
    cout<<"z "<<z<<endl;
    cout<<"a "<<a<<endl;
    //////////////2._///////////////
    int m=p*r%q+w/x-y;//el que tiene mayor precedencia(),*,/,%,+,-.
    cout<<m<<endl;*/



    return 0;
}

