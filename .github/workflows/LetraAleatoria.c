#include <stdio.h>
#include <math.h>


int main()
{
    char aleatoria = 'a' + (random() % 26);
    char input;
    do{
        scanf("%c%*c", &input);
        if(input < aleatoria){
            printf("Muito baixo\n");
        }
        else if(input > aleatoria){
            printf("Muito alto\n");
        }
        else if(input == aleatoria){
            printf("Acertou!");
            break;
        }
    }while(input != aleatoria);
    
}    
