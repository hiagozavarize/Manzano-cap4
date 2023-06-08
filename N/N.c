#include <stdio.h>
#include <locale.h>
//#include <math.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

    int a, b, c, soma;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    soma = a + b + c;

    if (soma >= 100)
    {
        printf("O resultado da soma é %d", soma);
    }else{
        printf("O resultado da soma é menor que 100"); 
    }
    

    return 0;
}