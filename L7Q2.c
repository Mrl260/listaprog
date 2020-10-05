//lista 7 questao 2: calcular soma dos quadrados
#include <stdio.h>
#define MAX 10

int main()
{
    int v1[MAX], v2=0, i;
    printf("digite os valores do vetor:\n");

    for(i=0; i<MAX; i++){
        scanf("%i", &v1[i]);
        v1[i]=v1[i]*v1[i];
        v2=v2+v1[i];
}
    printf("vetor gerado: %i", v2);

return 0;
}
