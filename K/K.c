#include <stdio.h>
#include <locale.h>
//#include <math.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

    int a;

    printf("Digite um número: ");
    scanf("%d", &a);

    if(a < 9 && a >= 1){
        printf("%d está dentro da faixa permitida, entre 1 e 9", a);
    }else{
        printf("%d está fora da faixa permitida, entre 1 e 9", a);
    }

    return 0;
}