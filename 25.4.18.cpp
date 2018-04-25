#include <iostream>

using namespace std;
///////////////////////////////
int sum_pointers(int *ptr,int tam){
    int cont;
    for(int i=0;i<tam;i++){
        int a=*ptr+i;
        cont+=a;
    }
    return cont;
}
int sum_recupoint(int *ptr,int tamanio){
    if(tamanio==1){
        return *ptr;
    }
    return *ptr+(tamanio-1)+sum_recupoint(ptr,tamanio-1);
}
///////////////////////////////
void invert(int arr[],int len){
    int g;
    for(int i=0;i<len-1;i++){
        int *ptr=arr;
        g=*(ptr+i);
        *(ptr+i)=*(ptr+len-1);
        *(ptr+len-1)=g;
        len--;
    }
}
///////////////////////////////
int tam_a(char *ptr){
    int cont=0;
    for(int i=0;*(ptr+i)!='\0';i++){
        cont++;
    }
    return cont;
}
///////////////////////////////
void str_cp(char *ptra,char *ptrb){
    for(int i=0;*(ptra+i)!='\0';i++){
        *(ptrb+i)=*(ptra+i);
    }
}
///////////////////////////////////
void strcat(char *ptrs,char *ptrt){
    int a;
    for(int i=0;*(ptrt+i)!='\0';i++){
        a=tam_a(ptrs);
        *(ptrs+a)+=*(ptrt+i);
    }
}



int main()
{
    char a[]="hola";
    char b[10]={};
    strcat(b,a);
    strcat(b,a);
    cout<<b;
    return 0;
}
