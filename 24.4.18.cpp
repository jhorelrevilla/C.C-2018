#include <iostream>

using namespace std;
////////////////////////1
int sum_it(int a[],int tamanio){
    int cont=0;
    for(int i=0;i<tamanio;i++){
        cont+=a[i];
    }
    return cont;
}
int sum_recu(int a[],int tamanio){
    if(tamanio==1){
        return a[0];
    }
    return a[tamanio-1]+sum_recu(a,tamanio-1);
}
////////////////////////2
void invert(int arr[],int tamanio){
    int a;
    for(int i=0;i<tamanio;i++){
        cout<<arr[i];
    }
    for(int i = 0;i<=(tamanio/2);i++){
        if(i!=((tamanio-i)-1)){
            a=arr[i];
            arr[i]=arr[(tamanio-i)-1];
            arr[(tamanio-i)-1]=a;
        }
    }
    cout<<"\n";
    for(int i=0;i<tamanio;i++){
        cout<<arr[i];
    }
}
////////////////////////3
int tam_a(char a[]){
    int cont=0;
    for(int i=0;a[i]!='\0';i++){
        cont++;
    }
    return cont;
}
////////////////////////4
void str_cp(char a[],char b[]){
    for(int i=0;a[i]!='\0';i++){
        b[i]=a[i];
    }
}
////////////////////////5
void str_cat(char a[],char b[]){
    for(int i=0;i<tam_a(b)-1;i++){
        if(a[i]!="\n"){
            for(int j=0;j<tam_a(a);j++){
                b[j]=a[j];
            }
        }
    }

}
int main()
{

    int a[]={1,2,3,4,5};
    invert(a,5);


    return 0;
}
