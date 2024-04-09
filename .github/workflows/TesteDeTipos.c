#include <stdio.h>

float funcaoC46(){
    float a = 3;
    float b = a / 2;
    float c = b + 3.1;
    printf("c = %.1f\n", c);
}
float funcaoC41(){
    int a = 3;
    int b = a / 2;
    float c = b + 3.1;
    printf("c = %.1f\n", c);
}
int funcaoC4(){
    int a = 3;
    int b = a / 2;
    int c = b + 3.1;
    printf("c = %d\n", c);
}
int main(){
    funcaoC46();
    funcaoC41();
    funcaoC4();
    return 0;
}
