#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

    float nota1, nota2, nota3, nota4, media;

        printf("Qual a sua primeira nota? \n");
        scanf("%f", &nota1);

        printf("Qual a sua segunda nota?\n");
        scanf("%f", &nota2);

        printf("Qual a sua terceira nota?\n");
        scanf("%f", &nota3);

        printf("Qual a sua quarta nota?\n");
        scanf("%f", &nota4); 

        media = (nota1 + nota2 + nota3 + nota4)/4;

        printf("Sua média foi %.1f\n", media);
        if (media >= 5)
            {
            printf("Você está Aprovado!\n");
        }else{
            printf("Você está reprovado.\n");
        }


    return 0;
}