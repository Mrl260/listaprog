#include <stdio.h>
#include <string.h>
//codigo que retorne as primeiras quatro letras de uma frase
int main()
{
    char nome[30], tres[4];
    int i;
    printf("nome: ");
    fgets(nome, 30, stdin);
    for (i=0; i<4; i++){
        tres[i]=nome[i];
        printf("%c", tres[i]);
    }
    return 0;

}
