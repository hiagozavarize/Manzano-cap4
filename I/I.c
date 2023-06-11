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

    // Identificar o maior valor
    maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    if (d > maior) {
        maior = d;
    }
    if (e > maior) {
        maior = e;
    }

    // Identificar o menor valor
    menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    if (d < menor) {
        menor = d;
    }
    if (e < menor) {
        menor = e;
    }

    // Apresentar o maior e o menor valores informados
    printf("O maior valor informado e: %d\n", maior);
    printf("O menor valor informado e: %d\n", menor);


    return 0;
}