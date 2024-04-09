#include<stdio.h>
#include<stdlib.h>


main()
{  
    int i=0;
    int divisao, resto, soma;
    for(i=1000;i<=9999;i++){
        divisao = (i / 100);
        resto = i % 100;
        soma = (divisao + resto);
        if(soma * soma == i){
            printf("%d\n", i);
        }
    }
return 0;
}
