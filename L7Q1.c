//lista 7 - QUESTAO 1
//algoritmo que leia um vetor de 30 numeros inteirose gere um vetor que tenha os valores pares em dobro e impares triplos

#include <stdio.h>
#define MAX 30
int main()
{
    int v1[MAX], v2[MAX], i;
    printf("digite os dados do vetor:\n");

    for(i=0; i<MAX; i++){

        scanf("%i", &v1[i]);
        if (v1[i]%2==0){
            v2[i]=v1[i]*2;
        }else {
        v2[i]=v1[i]*3;
        }
    }
    printf("vetor gerado: ");
    for(i=0; i<MAX; i++){
        printf("%i ", v2[i]);
    }

return 0;
}
