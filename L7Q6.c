//LISTA 7 QUESTAO 6: CALCULAR MEDIA ENTRE VALORES E DIFERENCIAR OS VALORES ACIMA
#include<stdio.h>
#define MAX 4       //alterar o valor de MAX para a quantidades de valores disponivel

int main()
{
    int v1[MAX], i, d=0;
    float media=0;
    printf("digite os valores do vetor\n");

    for(i=0; i<MAX; i++){
        scanf("%i", &v1[i]);
        media=(media+v1[i]);
}
    media=media/MAX;

    for(i=0; i<MAX; i++){
        if(v1[i]>media){
        d=d+1;
    }
}
printf("numero de dias com temperatura acima da media: %i", d);
return 0;
}

