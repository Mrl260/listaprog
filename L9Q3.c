#include <stdio.h>

//soma de impares, soma das colunas e das linhas separadamente

int main()
{
    int m[3][3], i, j, sl=0, sc=0, si=0;
    printf("digite os valores da matriz:\n");

    for(i=0; i<3; i++){             //criando matriz
        for(j=0;j<3;j++){
            scanf("%i", &m[i][j]);
            if (m[i][j]%2!=0){      //somando impares
                si=si+m[i][j];
            }
        }
}
    for(i=0; i<3; i++){     //somar linha i=0
        for(j=0;j<3;j++){
            if(i==0){
                sl=sl+m[i][j];
            }
            if(i==1){
                sl=sl+m[i][j];
            }
            if(i==2){
                sl=sl+m[i][j];
            }
        }
        printf("\nsomatorio da linha: %i", sl);
        sl=0;
}
    for(i=0; i<3; i++){     //somar coluna j=0
        for(j=0;j<3;j++){
            if(j==0){
                sc=sc+m[i][j];
            }
            if(j==1){
                sc=sc+m[i][j];
            }
            if(j==2){
                sc=sc+m[i][j];
            }
        }
        printf("\nsomatorio da coluna: %i", sc);
        sc=0;
}
    printf("\nsomatorio dos numeros impares: %i\n", si);
    return 0;


}
