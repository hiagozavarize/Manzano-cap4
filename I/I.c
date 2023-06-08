#include <stdio.h>
#include <locale.h>
//#include <math.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

    int a, b, c, d, e, maior, menor;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    printf("Digite o valor de D: ");
    scanf("%d", &d);
    printf("Digite o valor de E: ");
    scanf("%d", &e);

    if (a > b && b > c && c > d && d > e)
    {
        maior = a;
        menor = e;
        printf("O maior é %d e o menor é %d", a, e);        
    }
    if (b > a && a > c && c > d && d > e)
    {
        maior = a;
        menor = e;
        printf("O maior é %d e o menor é %d", b, e);        
    }
    if (c > a && a > b && b > d && d > e)
    {
        maior = c;
        menor = e;
        printf("O maior é %d e o menor é %d", c, e);        
    }
    if (d > a && a > b && b > c && c > e)
    {
        maior = d;
        menor = e;
        printf("O maior é %d e o menor é %d", d, e);        
    }
    if (e > d && d > c && c > a && a > b)
    {
        maior = e;
        menor = b;
        printf("O maior é %d e o menor é %d", e, b);        
    }

    return 0;
}