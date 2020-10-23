#include <stdio.h>
#include <math.h>
//inserir matriz elevar a uma potencia

int main()
{
    int m[3][3], i, j, n;
    printf("informe o valor a potencia: ");
    scanf("%i", &n);
    printf("digite os valores da matriz:\n");

    for(i=0; i<3; i++){
        for(j=0;j<3;j++){
            scanf("%i", &m[i][j]);
        }
    }
    printf("\nendereco da matriz digitada:\n");
    for(i=0; i<3; i++){
        for(j=0;j<3;j++){
            m[i][j]=pow(m[i][j],n);
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}

