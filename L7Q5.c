//lista 7 questao 5: ler dois vetores e intercalar em um terceiro
#include <stdio.h>
#define MAX 10

int main()
{
    int v1[MAX], v2[MAX], v3[MAX*2], i;
    printf("digite os valores do vetor\n");

    for(i=0;i<MAX; i++){
        scanf("%i", &v1[i]);
    }
    for(i=0;i<MAX; i++){
        scanf("%i", &v2[i]);
    }
        v3[0]=v1[0];
        v3[1]=v2[1];
    for(i=0;i<MAX; i++){
        v3[i]=v1[i+2];
        v3[i]=v2[i+1];

    printf("%i %i ", v1[i], v2[i]);
    }
return 0;
}
