#include<stdio.h>
#include<stdlib.h>


int maiores(int n, int * vet, int x){
    int cont = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] > x){
            cont++;
        }
    }
    return cont;
    
}
int main(){
    int num;
    int vetor[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &num);
        vetor[i] = num;
    }
    int quant = maiores(5, vetor, 10);
    printf("%d", quant);
    return 0;
}