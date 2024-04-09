
#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int cont, n;
    int num = rand() % 100;
    do{
        scanf("%d", &n);
        if(n == num){
            cont++;
            break;
        }
        else if(n != num && n < num){
            printf("muito baixo, tente de novo\n");
        }
        else if(n != num && n > num){
            printf("muito alto, tente de novo\n");
        }
        cont++;
        
    }while(n != num);
    printf("acertou em %d tentativas", cont);

    return 0;
}
