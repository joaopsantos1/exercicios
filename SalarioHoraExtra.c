#include <stdio.h>
#include <math.h>


int main()
{
    int hora;
    float salario;
    scanf("%d %f", &hora, &salario);
    if(hora <= 40){
        printf("Seu salário é %.2f", (salario * hora));
    }
    else if(hora > 40 && hora <= 60){
        float parcial = salario * 40;
        int horaparcial = hora - 40;
        float adicional = (salario + (salario / 2)) * horaparcial;
        float total = parcial + adicional;
        printf("Seu salário é %.2f", total);
    }
    else if(hora > 60){
        float parcial = salario * 40;
        int horaparcial = hora - 40;
        float adicional = (salario * 2) * horaparcial;
        float total = parcial + adicional;
        printf("Seu salário é %.2f", total);
    }
    return 0;
}

