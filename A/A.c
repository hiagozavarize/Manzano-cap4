#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-BR");

    int a, b, maior, menor, result;

    printf("Digite os valor de A: ");
    scanf("%d",&a);
    printf("Digite os valor de B: ");
    scanf("%d",&b);

    if (a > b){
        maior = a;
        menor = b;
    }else{
        menor = a;
        maior = b;
    }

    result = maior - menor;

    printf("%d é maior que %d, então o resultado é %d", maior, menor, result);

    return 0;
}