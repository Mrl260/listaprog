#include <stdio.h>
#include <string.h>
#include <ctype.h>
//converter vogal para asterisco

int main(){
    int i;
    char nome[100], nomek[100];
    printf("digite a frase: \n");
    fgets(nome, 100, stdin);


    for (i=0; i<200; i++){
        nomek[i]=toupper(nome[i]);
        if (nomek[i]=='A'||nomek[i]=='E'||
            nomek[i]=='I'||nomek[i]=='O'||
            nomek[i]=='U'){
            nomek[i]='*';
        }
    }
    fputs(nomek, stdout);

    return 0;
}
