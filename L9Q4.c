#include <stdio.h>

#define TAM 10
//gerar um vetor com os maires valores de linhas e colunas de uma matriz

int main()
{
    int m[TAM][TAM], i, j, x[TAM], y[TAM];
    printf("matriz gerada:\n");
    for (i=0; i<TAM; i++){
        for (j=0; j<TAM; j++){          //gerando os valores aleatoriamente
            m[i][j]=rand()%10;
            printf("%i ", m[i][j]);
    }
    printf("\n");
}
printf("\nmaiores valores de cada linha:\n");

    for(i=0; i<TAM; i++){ x[i]=0;        //maior valor de cada linha
        for(j=0; j<TAM; j++){            //uso x[i]=0, prq o programa pega um numero generico
            if(x[i]<m[i][j]){
                x[i]=m[i][j];}}
printf("%i ", x[i]); }

printf("\nmenores valores de cada coluna:\n");

    for(j=0; j<TAM; j++){        //menor valor de cada coluna
        for(i=0; i<TAM; i++){       // nao uso y[j]=0, prq nao tem nenhum numero menor que 0 na matriz
            if(y[j]>m[i][j]){
                y[j]=m[i][j];}}
printf("%i ", y[j]); }


return 0;}



