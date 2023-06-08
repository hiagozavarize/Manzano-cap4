#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

    int N, result;
//independente do n�mero ser positivo ou negativo o valor final deve ser transformado em positivo.
    printf("Digite um n�mero, sendo positivo ou negativo: ");
    scanf("%d", &N);

    if (N < 0){
        result = N * -1;
    }else{
        result = N;
    }
    
    printf("O resultado � %d", result);

    return 0;
}