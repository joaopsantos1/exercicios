#include <stdio.h>
int total_de_notas(int n){
    int cem = n / 100;
    int r = n % 100;
    int cinquenta = r / 50;
    r = r % 50;
    int vinte = r / 20;
    r = r % 20;
    int dez = r / 10;
    r = r % 10;
    int cinco = r / 5;
    r = r % 5;
    int dois = r / 2;
    r = r % 2;
    int um = r / 1;
    printf("notas de cem = %d\nnotas de cinquenta = %d\nnotas de vinte = %d\n notas de dez = %d\nnotas de cinco = %d\nnotas de dois = %d\nnotas de um = %d\n", cem, cinquenta, vinte, dez, cinco, dois, um);
}

int main()
{
    int num;
    scanf("%d", &num);
    total_de_notas(num);

    return 0;
}