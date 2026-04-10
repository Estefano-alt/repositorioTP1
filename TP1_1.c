#include<stdio.h>
int main(){
    printf("\nHola mundo");
    int a=10;
    int *puntero=&a;
    printf("\nEL contenido del puntero es: %d",*puntero);
    printf("\nLa direccion de memoria almacenada por el puntero es: %p",puntero);
    printf("\nDireccion de memoria de a es: %p",&a);
    printf("\nLa direccion de memoria del puntero es: %p",&puntero);
    printf("\nTamanio de memoria utilizada por la variables es: %d",sizeof(int));
    return 0;
}