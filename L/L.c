#include <stdio.h>
#include <locale.h>
//#include <math.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

    int a;

    printf("Digite um número: ");
    scanf("%d", &a);

    if(a <= 3){
        printf("%d", a);
    }else{
        printf("O valor inserido é maior que 3");
    }

    return 0;
}