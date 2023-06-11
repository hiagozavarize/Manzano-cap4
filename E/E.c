#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

    int valorA, valorB, valorC, delta, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%d", &valorA);
    printf("Digite o valor de B: ");
    scanf("%d", &valorB);
    printf("Digite o valor de C: ");
    scanf("%d", &valorC);

    delta = pow(valorB, 2) - 4 * valorA * valorC;

    printf("O valor de delta é %d \n", delta);

    if (delta < 0){
        printf("Não há solução no conjunto dos reais");
    }
    if (delta > 0){
        x1 = (-valorB + sqrt(delta))/2*valorA;
        x2 = (-valorB - sqrt(delta))/2*valorA;

        printf("x1 vale %d \n", x1);
        printf("x2 vale %d \n", x2);
    }
    if (delta == 0){
        x1 = (-valorB)/2*valorA;

        printf("x? vale %d", x1);
    }

    return 0;
}