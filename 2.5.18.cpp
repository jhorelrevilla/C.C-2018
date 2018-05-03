#include <iostream>

using namespace std;
int convertc_i(char a){
    return a-'0';
}
int elevar(int b,int exp){
    if(exp==0){
        return 1;
    }
    if(exp==1){
        return b;
    }
    return b*elevar(b,exp-1);
}
int convertcien(char a[]){
    int cont=0;
    float numcomp=0;
    int numce=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i+1]=='e'){
            for(int j=0;j<=i;j++){
                if(a[j]!='.'){
                    cout<<"i"<<i<<endl;
                    cout<<j<<endl;
                    if(i!=j)
                        numcomp+=convertc_i(a[j])*elevar(10,(i-1)-j);
                    if(i==j)
                        numcomp+=convertc_i(a[j])*elevar(10,i-j);
                }
                if(a[j]=='.'){
                    for(int w=j+1;a[w]!='e';w++){
                        cont++;
                    }
                }
            }
            if(a[i+2]=='-'){
                numce=convertc_i(a[i+3]);
                numcomp/=(elevar(10,numce));
            }
            if(a[i+2]!='-'){
                numce=convertc_i(a[i+2]);
                numcomp*=(elevar(10,numce));
            }
        }
    }
    cout<<"contador de .: "<<cont<<endl;
    cout<<"numce: "<<(elevar(10,numce))<<endl;
    cout<<"numcomp: "<<numcomp;

}


int subacadena(char *s,char *t,int tamanioa, int tamaniob ){

    for(int i=0;*(t+i)!='\0';i++){
        if(*(t+i)==*s){
            int cont=i;
            for(int j=0;*(s+j)!='\0';s++){
            }
        }
    }

}







int main()
{
    char *a="543.2e3";//0123456


    return 0;
}
