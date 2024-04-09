#include <stdio.h>
#include <math.h>


int main()
{
    int x, y;
    int soma;
    int cont;
    do{
        scanf("%d %d", &x, &y);
    }while(x > y);
    for(int i = x; i < y; i++){
        printf("%d ", i);
        soma = soma + i;
        cont++;
        if (soma > y){
            printf("\n%d, = %d", cont, soma);
            break;
        }
    }
    return 0;
}

