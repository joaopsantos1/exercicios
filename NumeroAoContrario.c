#include<stdio.h>


void main(){
    unsigned int revertido = 0, numero;
    scanf("%d", &numero);
    while(numero != 0){
        revertido = 10 * revertido + numero % 10;
        numero = numero / 10;
    }
    printf("resultado = %u", revertido);
}