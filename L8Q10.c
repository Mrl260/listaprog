#include<stdio.h>
#define MAX 5

int main(){
    int v1[MAX], *p, i;
    printf("digite os valores do vetor:\n");

    for(i=0; i<MAX; i++){
        scanf("%i", &v1[i]);
}
    printf("vetor digitado: ");     //vetor digitado
    for(i=0; i<MAX; i++){

    printf("%i ", v1[i]);}
    printf("\nenderecos:");

    for(i=0; i<MAX; i++){       //endereco de cada unidade
        p=&v1[i];
        printf("%p ,", p);

}
    printf("\n\nenderecos valores positivos: ");    //enderecos positivos
    for(i=0; i<MAX; i++){
        if (v1[i]%2==0){
            p=&v1[i];
            printf("%p ,", p);
        }
}




    return 0;
}


