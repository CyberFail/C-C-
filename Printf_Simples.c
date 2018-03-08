#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int o = 0;
    char nome[255] = " ";
    int idade = 0;
    float dinheiro = 0.00;
    do{

    printf("*** Menu ***\n");
    printf(" 1 - Print seu nome(String)\n");
    printf(" 2 - Print sua idade(Int)\n");
    printf(" 3 - Print dinheiro que possui(Float)");
    printf(" 0 - Sair\n");


    printf("Digite sua opção: ");
    scanf("%d", &o);

    switch(o){
        case 0:
            printf("Saindo...\n");
            printf("clear");
        break;

        case 1:
            printf("Digite seu nome: \n");
            scanf("%s", nome);
            printf("Bem vindo %s \n", nome);
        break;

        case 2:
            printf("Digite sua idade: \n");
            scanf("%d", &idade);
            printf("Sua idade é:  %d \n", idade);
        break;

        case 3:
            printf("Quantos reais você tem ?\n");
            scanf("%f", &dinheiro);
            printf("Você possui %.2f\n", dinheiro);
        break;
    }


    }while(o);

}