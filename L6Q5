#include<stdio.h>
#include<math.h>
//questao 5 lista 6

int main(){
    int meses;
    float apl, taxa, va=0,d=0;
    printf("qual a aplicacao mensal?\n");
    scanf("%f",&apl);
    printf("quantos meses?\n");
    scanf("%i", &meses);
    printf("qual a taxa?\n");
    scanf("%f", &taxa);

    while (meses>1){
        va=va+((apl*(pow((1+taxa),meses))-1)/taxa);
        printf("qual a aplicacao mensal?\n");
        scanf("%f",&apl);
        printf("qual a taxa?\n");
        scanf("%f", &taxa);
        meses=meses-1;
        d=d+1;
}
    printf("valor acumulado: %.2f\n", va);
    printf("numero de depositos: %.2f", d);
return 0;

}
