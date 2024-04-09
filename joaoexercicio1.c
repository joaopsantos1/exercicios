#include <stdio.h>

int main()
{
    int b;
    int cont = 0;
    scanf("%d", &b);
    for(int i = 1; i <= b; i++){
        if(b % i == 0){
            cont++;
        }        
    }
    if(b == 1 || cont>2){
        printf("NUMERO NÃO PRIMO", b);
        
    }
    else{
        printf("NÚMERO PRIMO", b);
    }

    return 0;
}