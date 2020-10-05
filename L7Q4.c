//LISTA 7 QUESTAO 4: informar quantidade de valores impares em um vetor
#include<stdio.h>
#define MAX 100

int main()
{
    int v1[MAX], i, n=0;
    printf("digite os valores do vetor:\n");

    for(i=0; i<MAX; i++){
        scanf("%i", &v1[i]);
        if(v1[i]%2!=0){
            n=n+1;
        }
    }
    printf("numero de valores impares: %i", n);
    return 0;
}
