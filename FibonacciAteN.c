#include <stdio.h>
#include <math.h>


int main()
{
    int n;
    int termo1 = 1;
    int termo2 = 1;
    int termo3 = termo1 + termo2;
    scanf("%d", &n);
    printf("%d %d ", termo1, termo2);
    for(int i = 0; i < (n - 2); i++){
        printf("%d ", termo3);
        termo1 = termo2;
        termo2 = termo3;
        termo3 = termo1 + termo2;
        
    }
}

