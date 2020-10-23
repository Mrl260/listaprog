#include <stdio.h>
#include <string.h>
//quantas vogais em uma frase, e reescrever trocando vogais por caractere

int main(){
    int i, v=0;
    char nome[200], x;
    printf("digite a frase: ");
    fgets(nome, 200, stdin);
    printf("digite o caractere: ");
    scanf("%c", &x);
    for (i=0; i<200; i++){
        if (nome[i]=='a'||nome[i]=='A'||
            nome[i]=='e'||nome[i]=='E'||
            nome[i]=='i'||nome[i]=='I'||
            nome[i]=='o'||nome[i]=='O'||
            nome[i]=='u'||nome[i]=='U'){
            v++;
            nome[i]=x;
        }
    }

    printf("Numero de vogais: %i\n\n", v);
    fputs(nome, stdout);
    return 0;
}
