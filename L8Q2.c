#include <stdio.h>
#include <string.h>
//quantas vogais em uma frase

int main(){
    int i, v=0;
    char nome[200];
    printf("digite a frase: \n");
    fgets(nome, 200, stdin);
    for (i=0; i<200; i++){
        if (nome[i]=='a'||nome[i]=='A'||
            nome[i]=='e'||nome[i]=='E'||
            nome[i]=='i'||nome[i]=='I'||
            nome[i]=='o'||nome[i]=='O'||
            nome[i]=='u'||nome[i]=='U'){
            v++;
        }
    }
    printf("Numero de vogais: %i", v);
    return 0;
}
