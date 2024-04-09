#include <stdio.h>

int main()
{
    int i = 1;
    int cont, n, soma;
    scanf("%d", &n);
    while(cont<n){
        soma = soma + i;
        i = i + 2;
        cont++;
    }
    printf("%d", soma);

    return 0;
}