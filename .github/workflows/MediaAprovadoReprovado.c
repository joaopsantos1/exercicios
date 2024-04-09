#include <stdio.h>
#include <stdlib.h>
float media(float * vetor){
    float soma, median;
    int cont;
    for(int i = 0; i <3; i++){
        soma = vetor[i] + soma;
        cont++;
    }
    median = soma / cont;
    return median;
}

int main()
{
    float vetore[3];
    int veri;
    for(int i = 0; i < 3; i++){
        scanf("%f", &vetore[i]);
        if(vetore[i] < 0 || vetore[i] > 10){
            printf("Nota inválida\n");
            exit(0);
        }
    }
    float mediar = media(vetore);
    if(mediar > 6){
        printf("Sua média é: %.1f e você está aprovado.", mediar);
    }
    else if(mediar < 6 && mediar >= 4){
        printf("Sua média é: %.1f e você tem que fazer VS.", mediar);
    }
    else{
        printf("Sua média é %.1f e você está reprovado.", mediar);
    }
    return 0;
    }