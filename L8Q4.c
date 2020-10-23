#include <stdio.h>
#include <string.h>
//ver se palavra e palindromo

int main(){
    int i, d=0,v=0;
    char nome[100];
    printf("digite a frase: ");
    fgets(nome, 100, stdin);
    v=(strlen(nome))-1;
    printf("numero de letras: %i\n", v);

    for (i=1; i<=(v/2); i++){
        if(nome[i-1]==nome[v-i]){
            d++;
        }
    }
    if(v/2==d){
        printf("palindromo, ladies and gentlemens");
    }
  return 0;
}
