#include <stdio.h>
#include <locale.h>
//#include <math.h>

int main(){

    setlocale(LC_ALL, "pt-BR");
    
    int num;

    printf("Digite um número e eu direi se é ímpar ou par: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d é par", num);
    }else{
        printf("%d é ímpar", num);
    }

    return 0;
}