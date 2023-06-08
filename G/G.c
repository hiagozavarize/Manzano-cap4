#include <stdio.h>
#include <locale.h>
//#include <math.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

    int a, b, c, d;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    printf("Digite o valor de D: ");
    scanf("%d", &d);

    if (a % 2 == 0 && a % 3 == 0)
    {
        printf("%d é divisivel por 2 e 3\n", a);
    }
    if (b % 2 == 0 && b % 3 == 0)
    {
        printf("%d é divisivel por 2 e 3\n", b);
    }
    if (c % 2 == 0 && c % 3 == 0)
    {
        printf("%d é divisivel por 2 e 3\n", c);
    }
    if (d % 2 == 0 && d % 3 == 0)
    {
        printf("%d é divisivel por 2 e 3\n", d);
    }   

    return 0;
}