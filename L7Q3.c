//lista 7 questao 3: mostrar o valor maior, menor e as posicoes, de um vetor
#include<stdio.h>
#define MAX 20

int main(){
    int v1[MAX], maior, pm=0, menor, pn=0, i;
    printf("digite os valores do vetor:\n");

    for(i=0; i<MAX; i++){
        scanf("%i", &v1[i]);
}
    maior=v1[0];
    menor=v1[0];

    for(i=0; i<MAX; i++){
        if(v1[i]>maior){
        maior=v1[i];
        pm=i;
}
        if(v1[i]<menor){
        menor=v1[i];
        pn=i;
}
}
    printf("\n\n");
    printf("valor maior: %i, no indice: %i\n", maior, pm);
    printf("valor menor: %i, no indice: %i", menor, pn);
    return 0;
}


