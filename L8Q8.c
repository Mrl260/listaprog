#include <stdio.h>

int main() {
    int n1, n2, *p1, *p2;
    printf("digite o primeiro valor: ");
    scanf("%i", &n1);
    printf("digite o segundo valor: ");
    scanf("%i", &n2);

    p1=&n1;
    p2=&n2;

    if (p1<p2){
        printf("valor maior: %i\nendereco: %p",*p2 ,p2);
    }
    else{
        printf("valor maior: %i\nendereco: %p",*p1 ,p1);
    }
    printf("\n\n");
    printf("primeiro: %p \nsegundo: %p", p1, p2);
    return 0;
}
