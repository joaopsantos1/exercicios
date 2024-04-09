#include <stdio.h>

int main()
{
    char op;
    float a, b, resultado;
    scanf("%c %f %f", &op, &a, &b);
    if(op == '+'){
        resultado = a + b;
    }
    if(op == '-'){
        resultado = a - b;
    }
    if(op == '/'){
        resultado = a / b;
    }
    if(op == '*'){
        resultado = a * b;
    }
    printf("%.2f\n", resultado);
    return 0;
}
