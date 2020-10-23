#include <stdio.h>
//inserir matriz 3x3 e retornar

int main()
{
    int m[3][3], i, j;
    printf("digite os valores da matriz:\n");

    for(i=0; i<3; i++){
        for(j=0;j<3;j++){
            scanf("%i", &m[i][j]);
        }
    }
    printf("\nmatriz digitada:\n");
    for(i=0; i<3; i++){
        for(j=0;j<3;j++){
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
