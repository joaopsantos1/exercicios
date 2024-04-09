#include<stdio.h>
#include<stdlib.h>


float media(int n, float * vet){
    float soma = 0;
    for(int i = 0; i < n; i++){
        soma += vet[i];
        }
    return soma / n;
}
int main(){
    int num;
    float vetor[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &num);
        vetor[i] = num;
    }
    float mediar = media(5, vetor);
    printf("%.2f", mediar);
    return 0;
}