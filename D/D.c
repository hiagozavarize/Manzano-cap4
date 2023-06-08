#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

       float nota1, nota2, nota3, nota4, media1, media2, nota_exame;

        printf("Qual a sua primeira nota?: ");
        scanf("%f", &nota1);

        printf("Qual a sua segunda nota?: ");
        scanf("%f", &nota2);

        printf("Qual a sua terceira nota?: ");
        scanf("%f", &nota3);

        printf("Qual a sua quarta nota?: ");
        scanf("%f", &nota4); 

        media1 = (nota1 + nota2 + nota3 + nota4)/4;

        printf("Sua média foi %.1f \n", media1);
        if (media1 >= 7)
            {
            printf("Você está Aprovado!");
        }else{
            printf("Qual sua nota no exame?: ");
            scanf("%f", &nota_exame);

            media2 = (nota_exame + media2)/2;

            if (media2 >= 5)
            {
                printf("Aprovado em exame com uma média de %.1f.", media2);
            }else{
                printf("Sua média foi %.1f você está reprovado.", media2);
            }
            
        }

    return 0;
}