#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

    int a, b, c;
// os valores digitados devem ser organizados em ordem crescente
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    if (a < b && b < c){
        printf("%d, %d, %d", a, b, c);
    }else
        if (a > b && b > c){
            printf("%d, %d, %d", c, b, a);
        }else
            if (b > c && c < a){
                printf("%d, %d, %d", c, a, b);
            }else
                if (c > a && a > b){
                    printf("%d, %d, %d", b, a, c);
                }else
                    if (a > c && c > b){
                        printf("%d, %d, %d", b, c, a);
                    }
    
    return 0;
}