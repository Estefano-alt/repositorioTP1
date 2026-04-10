#include<stdio.h>
//FUNCIONES
int cuadradoNumero(int num);
void cuadradoNumer(int num);
void invertir(int *num, int *num2);
void orden(int *num, int *num2);

int main(){
    int a,b,c;
    printf("\nIngrese el numero A, el cual se elevara al cuadrado: ");
    scanf("%d",&a);
    c=cuadradoNumero(a);
    printf("\nEl numero A al cuadrado es: %d",c);
    cuadradoNumer(a);
    printf("\nIngrese el numero B, para invertir con A: ");
    scanf("%d",&b);
    printf("\nFuncion Invertir");
    invertir(&a,&b);
    printf("\nEl numero A contiene: %d",a);
    printf("\nEl numero B contiene: %d",b);
    printf("\nFuncion Orden");
    orden(&a,&b);
    printf("\nEl numero A contiene: %d",a);
    printf("\nEl numero B contiene: %d",b);
    return 0;
}

int cuadradoNumero(int num){
    return num*num;
}

void cuadradoNumer(int num){
    int result;
    result=num*num;
    printf("\nEl numero A elevado al cuadrado es: %d (VOID)", result);
}

void invertir(int *num, int *num2){
    int aux=*num;
    *num=*num2;
    *num2=aux;
}

void orden(int *num, int *num2){
    int aux=*num;
    printf("\nGuardar en A el valor mas chico y guardar en B el valor mas Grande");
    if(*num>*num2){
        *num=*num2;
        *num2=aux;
    }
}