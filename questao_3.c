#include <stdio.h>
//questao 3 lista 6 - gerar um numero invertido

int main()
{
    int num,a,b,c;
    printf("digite o valor a seguir, (entre 111 e 999)\n");
    scanf("%i", &num);
    a=num/100;
    c=num%10;
    b=(num-(100*a+c))/10;
    printf("numero invertido: %i %i %i", c,b,a);
    return 0;
}
