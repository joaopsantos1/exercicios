#include <stdio.h>

int main(){
    int a, b, c, soma;
    int maior = 0;
    int vetor[3];
    int media;
    int cont = 0;
    scanf("%d %d %d", &a, &b, &c);
    vetor[0] = a;
    vetor[1] = b;
    vetor[2] = c;
    int menor = vetor[0];
    for(int i = 0; i < 3; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        soma = vetor[i] + soma;
        cont++;
        if (vetor[i] % 2 == 0){
            printf("%d é par\n", vetor[i]);
        }
    }
    media = soma / cont;
    printf("menor = %d\nmaior = %d\nmédia = %d", menor, maior, media);

    return 0;
}
