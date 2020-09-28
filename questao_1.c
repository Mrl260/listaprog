#include <stdio.h>
int main() {
    int a,b,c;
    printf("digite os tres valores\n");
    printf("digite o primeiro: ");
    scanf("%i", &a);
    printf("digite o segundo: ");
    scanf("%i", &b);
    printf("digite o terceiro: ");
    scanf("%i", &c);
    if (a>b && a>c)
    {
        if (b>c)
        {
            printf("ordem: %i %i %i", a, b, c);
            }
        else
            printf("ordem: %i %i %i", a, c, b);
    }
    else {
        if (b>a && b>c){
            if (c>a){
                printf("ordem: %i %i %i", b, c, a);
            }
            else {
                printf("ordem: %i %i %i", b, a, c);
            }
        }else
        {
            if(a>b){
                printf("ordem: %i %i %i", c, a, b);
            }
            else{
                printf("ordem: %i %i %i", c, b, a);
            }

        }
    }
return 0;
}

