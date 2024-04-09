#include<stdio.h>
#include<stdlib.h>


float max_vet(int n, float * vet){
    float maior =  0;
    for(int i = 0; i < n; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
    
}
int main(){
    float num;
    float vetor[5];
    for(int i = 0; i < 5; i++){
        scanf("%f", &num);
        vetor[i] = num;
    }
    float maiore = max_vet(5, vetor);
    printf("%.2f", maiore);
    return 0;
}
