#include <stdio.h>
#include <locale.h>
//#include <math.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

    int a, mult;

    printf("Digite um número: ");
    scanf("%d", &a);

    mult = a * 2;

    if (mult > 30)
    {
        printf("O resultado da multiplicação é %d", mult);
    }else{
        printf("O resultado da multiplicação é menor que 30");
    }
    
    return 0;
}