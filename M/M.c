#include <stdio.h>
#include <locale.h>
//#include <math.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

    char nome[50];
    char sexo;

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Qual seu sexo M/F: ");
    scanf(" %c", &sexo);

    if(sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f')
    {
        if(sexo == 'M' || sexo == 'm'){
        printf("Ilmo. Sr. %s", nome);
        }
        
        if(sexo == 'F' || sexo == 'f'){
        printf("Ilma. Sra %s", nome);
        }
        
    }else{
        printf("Sexo informado inválido");
    }

    return 0;
}