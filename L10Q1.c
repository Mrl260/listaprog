#include <stdio.h>
#include <string.h>

//recebe 3 notas e uma letra
//a==aritmetica  p==ponderada
//ponderada peso 5 3 2
//retorna media

   float arit(int n1, int n2, int n3){

        n1=(n1+n2+n3)/3;
        return n1;
}
   float pond(int n1, int n2, int n3){

        n1=(n1*5+n2*3+n3*2)/10;
        return n1;
}



int main(){
    int n1, n2, n3;
    float m;
    char t;
    printf("media ponderada(a) ou aritmetica(p)?\n");
    scanf("%c", &t);
    printf("digite as notas em sequencia: ");
    scanf("%i %i %i", &n1, &n2, &n3);
    if(t=='a'){
        m=arit(n1, n2, n3);
        printf("media= %.1f", m);
    }
    else{
        m=pond(n1, n2, n3);
        printf("media= %.1f", m);
    }
}
